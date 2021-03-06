#!/usr/bin/env python
from numpy import genfromtxt
import rospy
import math
import time
import csv
import numpy as np
import dvrk


foldername = './data/new_3dof_inaxis_svd_traj/'
testname =  'PID_data_0.9_test_effort.csv'

q= genfromtxt(foldername+testname, delimiter=',')
qt= q.transpose()

hz = 2/0.01*1;

p=dvrk.psm('PSM1')
r=rospy.Rate(hz)
p.home()
p.move_joint_some(np.array([0.0,0.0,0.005]),np.array([0,1,2]))

data = np.zeros((len(qt[2][:]),3*3))

i = 0
scale = 1
print(qt[1][:])

while  i<len(qt[1][:]) and not rospy.is_shutdown():
#for i in range(len(states[6][:])):
	#print(q[6][i])
	p.set_effort_joint(np.array([scale*qt[0][i], scale*qt[1][i], scale*qt[2][i], 0.0, 0.0, 0.0]))
	
	data[i][0:3] = p.get_current_joint_position()[0:3]
	data[i][3:6] = p.get_current_joint_velocity()[0:3]
	data[i][6:9] = p.get_current_joint_effort()[0:3]

	r.sleep()
	i=i+1

#Print Code
with open(foldername+'effort_data2.csv', 'wb') as myfile:
    wr = csv.writer(myfile, quoting=csv.QUOTE_NONE)
    for j in range(np.size(data,0)-10):
      wr.writerow(data[j])
