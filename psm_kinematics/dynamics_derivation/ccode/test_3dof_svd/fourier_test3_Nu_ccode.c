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
  t26 = t9*4.970930195564153E-1;
  t27 = cos(t3);
  t28 = cos(t4);
  t29 = t28*6.724343932675559E-1;
  t30 = cos(t5);
  t31 = t30*2.563060285830489E-1;
  t32 = t8*4.970930195564153E-1;
  t33 = qd1*qd1;
  t34 = q3*t8*1.856573084425787;
  t35 = q3*t9*1.856573084425787;
  t36 = q2-5.816747949334241E-1;
  t37 = sin(t36);
  t38 = cos(2.908373974667121E-1);
  A0[0][0] = t7*(-9.94380794600512E-1)-t10*9.94380794600512E-1-t25*2.563060285830489E-1+t26-t27*6.724343932675559E-1+t29+t31+t32+t34+t35+sin(q1-2.908373974667121E-1)*1.235494366096987+sin(q1+2.908373974667121E-1)*1.235494366096987+cos(q1)*2.181812193767105E-3+sin(q1)*2.54382352502363-qd1*qd3*2.023773520303417E-1-q3*t7*1.863105056917018-q3*t10*1.863105056917018+t6*t11*9.039554616362172E-3-t6*t13*1.106214907148843E-1+t6*t20*1.040764797963363E-1-qd2*qd3*sin(t12)*6.339412722727777E-1+q3*qd1*qd3*1.215956686211547+qd1*qd2*t11*7.564251221001964E-2+qd2*qd3*t11*4.204444007610312E-1+qd1*qd2*t16*5.809222958093163E-1+qd1*qd3*t16*1.760516882619706E-1+qd1*qd2*t18*3.138441166323048E-2+qd1*qd2*t19*5.103384154060368E-1-qd1*qd3*t18*1.136677398628033E-1-qd1*qd3*t19*1.653639681402867E-1-qd1*qd2*t21*2.081239833454841E-1-qd1*qd2*t22*1.001965858490716-qd1*qd3*t21*3.784290402923124E-1+qd1*qd3*t22*3.373037487624264E-1-qd1*qd2*t24*1.135287120876937E-1+qd1*qd2*t37*7.564251221001964E-2-qd1*qd3*t38*1.136677398628033E-1-q3*t6*t13*3.169706361363889E-1+q3*t6*t20*2.102222003805156E-1-q3*qd1*qd2*t16*3.307279362805734E-1+q3*qd1*qd3*t16*4.581717537928584E-1-q3*qd1*qd2*t19*3.521033765239412E-1+q3*qd1*qd2*t21*6.746074975248528E-1+q3*qd1*qd2*t22*7.568580805846247E-1+q3*qd1*qd3*t21*7.577849324186885E-1+q3*qd1*qd2*t24*2.273354797256065E-1-qd1*qd2*t19*t23*4.581717537928584E-1-qd1*qd2*t22*t23*7.577849324186885E-1;
  A0[1][0] = t7*9.94380794600512E-1-t10*9.94380794600512E-1+t25*2.563060285830489E-1-t26-t27*6.724343932675559E-1-t29+t31+t32+t34-t35-qd2*qd3*4.047547040606835E-1+q3*t7*1.863105056917018-q3*t10*1.863105056917018-t11*t33*3.782125610500982E-2-t16*t33*2.904611479046582E-1-t18*t33*1.569220583161524E-2-t19*t33*2.551692077030184E-1+t21*t33*1.04061991672742E-1+t22*t33*5.009829292453579E-1+t24*t33*5.676435604384685E-2-t33*t37*3.782125610500982E-2+q3*qd2*qd3*2.431913372423094-qd2*qd3*t38*2.273354797256065E-1+q3*t16*t33*1.653639681402867E-1+q3*t19*t33*1.760516882619706E-1-q3*t21*t33*3.373037487624264E-1-q3*t22*t33*3.784290402923124E-1-q3*t24*t33*1.136677398628033E-1+t19*t23*t33*2.290858768964292E-1+t22*t23*t33*3.788924662093442E-1;
  A0[2][0] = t6*2.023773520303417E-1-t25*1.856573084425787+t27*1.863105056917018+t28*1.863105056917018-t30*1.856573084425787+t33*1.011886760151709E-1-q3*t6*1.215956686211547-q3*t33*6.079783431057735E-1+t6*t38*1.136677398628033E-1-t16*t33*8.802584413098531E-2+t18*t33*5.683386993140164E-2+t19*t33*8.268198407014335E-2+t21*t33*1.892145201461562E-1-t22*t33*1.686518743812132E-1+t33*t38*5.683386993140164E-2-q3*t16*t33*2.290858768964292E-1-q3*t21*t33*3.788924662093442E-1;
