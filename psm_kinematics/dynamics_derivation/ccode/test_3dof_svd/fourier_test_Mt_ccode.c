  /*
  V1.2
  */
  t2 = q2*2.0;
  t3 = t2-5.816747949334241E-1;
  t4 = t2-2.908373974667121E-1;
  t5 = cos(t2);
  t6 = sin(t2);
  t7 = cos(t3);
  t8 = q3*q3;
  t9 = cos(2.908373974667121E-1);
  t10 = cos(t4);
  t11 = sin(t3);
  t12 = cos(q2);
  t13 = q2-2.908373974667121E-1;
  t14 = sin(t13);
  t15 = sin(q2);
  t16 = t15*1.371097709652073E-2;
  t17 = q3*t14*8.408977751670349E-2;
  t18 = q3*t15*2.583959780139499E-2;
  t19 = t12*(-1.111102705459984E-3)-t14*3.862800612362775E-2+t16+t17+t18-2.360133806023771E-2;
  t20 = sin(2.908373974667121E-1);
  t21 = cos(t13);
  t22 = t12*(-2.583959780139499E-2)-t21*8.408977751670349E-2;
  t23 = t20*(-4.748467989690483E-2)+1.663641608508305E-1;
  A0[0][0] = q3*(-3.850240767317212E-2)+t5*3.727993601154655E-1-t6*5.358946241023789E-3-t7*2.37310555419316E-1+t8*2.697871578249834E-1-t9*8.678765284490835E-3-t10*8.678765284490835E-3+t11*2.09377192716882E-1+t12*6.304297605229296E-3-t20*2.656149838900845E-2+cos(q2-5.816747949334241E-1)*6.304297605229296E-3-sin(t4)*2.656149838900845E-2+q3*t5*5.78584352299389E-2+q3*t6*4.084885579899341E-2-q3*t7*9.636084290311102E-2-q3*t9*4.748467989690483E-2-q3*t10*4.748467989690483E-2+q3*t11*1.255153050518371E-1+t5*t8*1.582822663230161E-1+t7*t8*1.115048915019673E-1+2.799752449404409E-1;
  A0[0][1] = t19;
  A0[0][2] = t22;
  A0[1][0] = t19;
  A0[1][1] = q3*(-7.700481534634424E-2)+t8*5.395743156499667E-1-t9*1.735753056898167E-2-t20*5.312299677801691E-2-q3*t9*9.496935979380965E-2+4.321807923275454E-1;
  A0[1][2] = t23;
  A0[2][0] = t22;
  A0[2][1] = t23;
  A0[2][2] = 5.395743156499667E-1;
