#!/usr/bin/env python
from numpy import genfromtxt
import rospy
import math
import time
import csv
import numpy as np
import dvrk

foldername = './data/new_3dof_inaxis_svd_traj/'
testname =  'test_position'

q  = genfromtxt(foldername+testname+'.csv', delimiter=',')
qt = q.transpose()

times = 1
speedscale=0.9
scale = 0.92

if times ==1: 
	a = q;
else:	
	a = np.zeros((len(q[:][1]),len(q[1][:])*times))

	#Make twice the trajectory
	for i in range(len(qt[1][:])):
		a[i][:]=np.append(q[i][:],q[i][:])

p=dvrk.psm('PSM1')
r=rospy.Rate(2/0.01*speedscale)
p.home()
p.move_joint_some(np.array([0.0,0.0,0.0]),np.array([0,1,2]))

states = np.zeros((len(a[1][:]),3*3))

i = 0


while  i<len(a[1][:]) and not rospy.is_shutdown():
#for i in range(len(q[1][:])):
	#print(qt[1])
	p.move_joint_some(np.array([scale*a[0][i], scale*a[1][i], scale*a[2][i]]),np.array([0,1,2]),False)
	states[i][0:3] = p.get_current_joint_position()[0:3]
	states[i][3:6] = p.get_current_joint_velocity()[0:3]
	states[i][6:9] = p.get_current_joint_effort()[0:3]
	r.sleep()

	i = i +1
	
with open(foldername+'PID_data_0.9.csv', 'wb') as myfile:
    wr = csv.writer(myfile, quoting=csv.QUOTE_NONE)
    for i in range(np.size(states,0)-10):
      wr.writerow(states[i])
