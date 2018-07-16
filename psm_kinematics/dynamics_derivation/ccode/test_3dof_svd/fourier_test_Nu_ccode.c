  /*
  V1.2
  */
  t2 = q1-q2;
  t3 = q1+q2-2.908373974667121E-1;
  t4 = q1-q2+2.908373974667121E-1;
  t5 = q1+q2;
  t6 = qd2*qd2;
  t7 = sin(t4);
  t8 = sin(t5);
  t9 = sin(t2);
  t10 = sin(t3);
  t11 = sin(q2);
  t12 = q2-2.908373974667121E-1;
  t13 = cos(t12);
  t14 = q2*2.0;
  t15 = t14-5.816747949334241E-1;
  t16 = cos(t15);
  t17 = t14-2.908373974667121E-1;
  t18 = cos(t17);
  t19 = sin(t15);
  t20 = cos(q2);
  t21 = cos(t14);
  t22 = sin(t14);
  t23 = q3*q3;
  t24 = sin(t17);
  t25 = cos(t2);
  t26 = t25*8.676756140409428E-1;
  t27 = cos(t3);
  t28 = t27*1.020788373035687;
  t29 = t10*5.5100661244748E-1;
  t30 = cos(t4);
  t31 = t7*5.5100661244748E-1;
  t32 = cos(t5);
  t33 = qd1*qd1;
  t34 = q3*t8*1.551166209965558;
  t35 = q3*t9*1.551166209965558;
  t36 = q2-5.816747949334241E-1;
  t37 = sin(t36);
  t38 = cos(2.908373974667121E-1);
  A0[0][0] = q1*7.890791855018027E-1-t8*1.271807142744334-t9*1.271807142744334+t26+t28+t29-t30*1.020788373035687+t31-t32*8.676756140409428E-1+t34+t35-sin(q1-2.908373974667121E-1)*2.059403884374903E-1-sin(q1+2.908373974667121E-1)*2.059403884374903E-1-cos(q1)*4.973703391467796E-2+sin(q1)*3.689086478604334E-1-qd1*qd3*7.700481534634424E-2-q3*t7*1.813689521525775-q3*t10*1.813689521525775+t6*t11*2.222205410919969E-3-t6*t13*7.725601224725549E-2+t6*t20*2.742195419304145E-2+qd2*qd3*sin(t12)*3.36359110066814E-1+q3*qd1*qd3*1.079148631299933-qd1*qd2*t11*1.260859521045859E-2+qd2*qd3*t11*1.033583912055799E-1+qd1*qd2*t16*8.375087708675278E-1-qd1*qd3*t16*1.92721685806222E-1-qd1*qd2*t18*1.062459935560338E-1+qd1*qd2*t19*9.492422216772641E-1-qd1*qd3*t18*9.496935979380965E-2+qd1*qd3*t19*2.510306101036742E-1-qd1*qd2*t21*2.143578496409515E-2-qd1*qd2*t22*1.491197440461862+qd1*qd3*t21*1.157168704598778E-1+qd1*qd3*t22*8.169771159798682E-2+qd1*qd2*t24*3.471506113796334E-2-qd1*qd2*t37*1.260859521045859E-2-qd1*qd3*t38*9.496935979380965E-2+q3*t6*t13*1.68179555033407E-1+q3*t6*t20*5.167919560278997E-2+q3*qd1*qd2*t16*5.020612202073483E-1+q3*qd1*qd3*t16*4.460195660078691E-1+q3*qd1*qd2*t19*3.854433716124441E-1+q3*qd1*qd2*t21*1.633954231959736E-1-q3*qd1*qd2*t22*2.314337409197556E-1+q3*qd1*qd3*t21*6.331290652920644E-1+q3*qd1*qd2*t24*1.899387195876193E-1-qd1*qd2*t19*t23*4.460195660078691E-1-qd1*qd2*t22*t23*6.331290652920644E-1;
  A0[1][0] = q2*1.030589384778854-t8*1.271807142744334+t9*1.271807142744334-t26+t28+t29+t30*1.020788373035687-t31-t32*8.676756140409428E-1+t34-t35-qd2*qd3*1.540096306926885E-1+q3*t7*1.813689521525775-q3*t10*1.813689521525775+t11*t33*6.304297605229296E-3-t16*t33*4.187543854337639E-1+t18*t33*5.312299677801691E-2-t19*t33*4.74621110838632E-1+t21*t33*1.071789248204758E-2+t22*t33*7.45598720230931E-1-t24*t33*1.735753056898167E-2+t33*t37*6.304297605229296E-3+q3*qd2*qd3*2.158297262599867-qd2*qd3*t38*1.899387195876193E-1-q3*t16*t33*2.510306101036742E-1-q3*t19*t33*1.92721685806222E-1-q3*t21*t33*8.169771159798682E-2+q3*t22*t33*1.157168704598778E-1-q3*t24*t33*9.496935979380965E-2+t19*t23*t33*2.230097830039346E-1+t22*t23*t33*3.165645326460322E-1;
  A0[2][0] = t6*7.700481534634424E-2-t25*1.551166209965558+t27*1.813689521525775+t30*1.813689521525775-t32*1.551166209965558+t33*3.850240767317212E-2-q3*t6*1.079148631299933-q3*t33*5.395743156499667E-1+t6*t38*9.496935979380965E-2+t16*t33*9.636084290311102E-2+t18*t33*4.748467989690483E-2-t19*t33*1.255153050518371E-1-t21*t33*5.78584352299389E-2-t22*t33*4.084885579899341E-2+t33*t38*4.748467989690483E-2-q3*t16*t33*2.230097830039346E-1-q3*t21*t33*3.165645326460322E-1;
