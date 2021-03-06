#!/usr/bin/env python
from numpy import genfromtxt
import rospy
import math
import time
import csv
import numpy as np
import dvrk
import matplotlib.pyplot as plt
import datetime

foldername = './data/test_3dof_svd_psm2/'
testname =  'fourier_test6'

q  = genfromtxt(foldername+testname+'.csv', delimiter=',')
qt = q.transpose()

times = 1
speedscale=1
scale = 1

if times ==1: 
	a = q;
else:	
	a = np.zeros((len(q[:][1]),len(q[1][:])*times))

	#Make twice the trajectory
	for i in range(len(qt[1][:])):
		a[i][:]=np.append(q[i][:],q[i][:])

p=dvrk.psm('PSM2')
r=rospy.Rate(200*speedscale)
p.home()

#Strickbeck test
#p.move_joint_some(np.array([0, 0, scale*a[2][0], 0, 0, 0]),np.array([0,1,2,3,4,5]))

#Main Par ident
p.move_joint_some(np.array([scale*a[0][0], scale*a[1][0], scale*a[2][0], 0.0, 0.0, 0.0]),np.array([0,1,2,3,4,5]))

states = np.zeros((len(a[1][:]),3*3))

i = 0


while  i<len(a[1][:]) and not rospy.is_shutdown():

#while  i<100 and not rospy.is_shutdown():
#for i in range(len(q[1][:])):
	#print(qt[1])
	
	#Stribeck Test
	#p.move_joint_some(np.array([0, 0, scale*a[2][i]]),np.array([0,1,2]),False)
	
	#Main Par Ident
	p.move_joint_some(np.array([scale*a[0][i], scale*a[1][i], scale*a[2][i]]),np.array([0,1,2]),False)
	states[i][0:3] = p.get_current_joint_position()[0:3]
	states[i][3:6] = p.get_current_joint_velocity()[0:3]
	states[i][6:9] = p.get_current_joint_effort()[0:3]
	r.sleep()

	i = i +1
#print ' array non transpose:  ' 
#print states[:,8]
#print ' array transpose: '  
#print states[8,:]

#plt.plot(states[:,8])
#file_str = 'PID_test' + ':' + datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S")
#plt.savefig('./graphs/' + file_str + '.eps', bbox_inches='tight', format='eps', dpi=600)

#plt.show()
with open(foldername+testname+'_results.csv', 'wb') as myfile:
    wr = csv.writer(myfile, quoting=csv.QUOTE_NONE)
    for i in range(np.size(states,0)-10):
      wr.writerow(states[i])
