  /*
  V1.2
  */
  t2 = q1-q2;
  t3 = q1+q2-2.908373974667121E-1;
  t4 = q1-q2+2.908373974667121E-1;
  t5 = q1+q2;
  t6 = sin(t4);
  t7 = sin(t5);
  t8 = sin(t2);
  t9 = sin(t3);
  t10 = cos(t2);
  t11 = t8*4.970930195564153E-1;
  t12 = cos(t3);
  t13 = cos(t4);
  t14 = t13*6.724343932675559E-1;
  t15 = cos(t5);
  t16 = t15*2.563060285830489E-1;
  t17 = t7*4.970930195564153E-1;
  t18 = q3*t7*1.856573084425787;
  t19 = q3*t8*1.856573084425787;
  A0[0][0] = t6*(-9.94380794600512E-1)-t9*9.94380794600512E-1-t10*2.563060285830489E-1+t11-t12*6.724343932675559E-1+t14+t16+t17+t18+t19+sin(q1-2.908373974667121E-1)*1.235494366096987+sin(q1+2.908373974667121E-1)*1.235494366096987+cos(q1)*2.181812193767105E-3+sin(q1)*2.54382352502363-q3*t6*1.863105056917018-q3*t9*1.863105056917018;
  A0[1][0] = t6*9.94380794600512E-1-t9*9.94380794600512E-1+t10*2.563060285830489E-1-t11-t12*6.724343932675559E-1-t14+t16+t17+t18-t19+q3*t6*1.863105056917018-q3*t9*1.863105056917018;
  A0[2][0] = t10*(-1.856573084425787)+t12*1.863105056917018+t13*1.863105056917018-t15*1.856573084425787;
