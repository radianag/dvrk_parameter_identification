  /*
  V1.2
  */
  t2 = q1-q2;
  t3 = q1+q2;
  t4 = q2*2.0;
  t5 = sin(t3);
  t6 = sin(t2);
  t7 = t4-2.908373974667121E-1;
  t8 = cos(2.908373974667121E-1);
  t9 = cos(t7);
  t10 = t4-5.816747949334241E-1;
  t11 = sin(t7);
  t12 = cos(t4);
  t13 = sin(t4);
  t14 = q3*q3;
  t15 = q1-q2+2.908373974667121E-1;
  t16 = sin(t15);
  t17 = q1+q2-2.908373974667121E-1;
  t18 = sin(t17);
  t19 = cos(t10);
  t20 = sin(t10);
  t21 = qd2*qd2;
  t22 = cos(q2);
  t23 = sin(q2);
  t24 = q2-2.908373974667121E-1;
  t25 = cos(t2);
  t26 = cos(t3);
  t27 = sin(2.908373974667121E-1);
  t28 = cos(q1);
  t29 = cos(t24);
  t30 = sin(t24);
  t31 = t6*(4.9E1/1.0E1);
  t32 = t5*(4.9E1/1.0E1);
  t33 = t28*(4.9E1/5.0);
  t34 = qdd2*t30*(3.0/2.0E1);
  t35 = t21*t29*(3.0/1.0E1);
  t36 = t26*(4.9E1/1.0E1);
  t37 = qdd1*t27*(3.0/2.0E1);
  t38 = qdd1*t11*(3.0/2.0E1);
  t39 = qd1*qd2*t9*(3.0/5.0);
  t40 = q2-5.816747949334241E-1;
  t41 = qdd1*(1.0/2.0);
  t42 = t25*2.107E-1;
  t43 = qd1*qd1;
  t44 = q3*t5*(4.9E1/1.0E1);
  t45 = q3*t6*(4.9E1/1.0E1);
  t46 = t25*(4.9E1/1.0E1);
  t47 = cos(t17);
  t48 = t47*(4.9E1/1.0E1);
  t49 = cos(t15);
  t50 = qdd1*t30*(3.0/2.0E1);
  t51 = qdd2*t27*(3.0/1.0E1);
  t52 = sin(t40);
  t53 = t13*t43;
  A0[0][0] = qdd1*5.3675305E-2-t5*1.41169-t6*1.41169-t16*(1.47E2/2.0E2)-t18*(1.47E2/2.0E2)-t26*2.107E-1+t42+t44+t45-q3*qdd1*2.881E-1-qd1*qd3*5.762E-1+qdd1*t8*4.3215E-2+qdd1*t9*4.3215E-2-qdd1*t11*6.45E-3+qdd1*t12*4.0576305E-2-qdd1*t13*1.23883E-2+qdd1*t14*(1.0/2.0)+qdd1*t19*(9.0/8.0E2)-qdd1*t27*6.45E-3+q3*qd1*qd3*2.0-q3*qdd1*t8*(3.0/2.0E1)-q3*qdd1*t9*(3.0/2.0E1)-q3*qdd1*t12*2.881E-1+q3*qdd1*t13*(4.3E1/1.0E3)-qd1*qd2*t9*2.58E-2-qd1*qd3*t8*(3.0/1.0E1)-qd1*qd3*t9*(3.0/1.0E1)-qd1*qd2*t11*1.7286E-1-qd1*qd2*t12*4.95532E-2-qd1*qd2*t13*1.6230522E-1-qd1*qd3*t12*5.762E-1+qd1*qd3*t13*(4.3E1/5.0E2)-qd1*qd2*t20*(9.0/2.0E2)+qdd1*t12*t14*(1.0/2.0)+q3*qd1*qd2*t11*(3.0/5.0)+q3*qd1*qd2*t12*(4.3E1/2.5E2)+q3*qd1*qd2*t13*1.1524+q3*qd1*qd3*t12*2.0-qd1*qd2*t13*t14*2.0;
  A0[0][1] = q3*t16*(-2.95225)-q3*t18*2.95225+qdd1*t14*1.81503125E-1+q3*qd1*qd3*7.260125E-1+qdd1*t14*t19*1.81503125E-1+q3*qd1*qd3*t19*7.260125E-1-qd1*qd2*t14*t20*7.260125E-1;
  A0[0][2] = qdd1*(-2.881E-1)+t31+t32+q3*qdd1+qd1*qd3*2.0-qdd1*t8*(3.0/2.0E1)-qdd1*t9*(3.0/2.0E1)-qdd1*t12*2.881E-1+qdd1*t13*(4.3E1/1.0E3)+q3*qdd1*t12+qd1*qd2*t11*(3.0/5.0)+qd1*qd2*t12*(4.3E1/2.5E2)+qd1*qd2*t13*1.1524+qd1*qd3*t12*2.0-q3*qd1*qd2*t13*4.0;
  A0[0][3] = t28*(-4.9E1/5.0)+t34+t35+qdd2*t22*(4.3E1/1.0E3)+qdd2*t23*2.881E-1+qdd3*t22+t21*t22*5.762E-1-t21*t23*(4.3E1/5.0E2)-q3*qdd2*t23-qd2*qd3*t23*4.0-q3*t21*t22*2.0;
  A0[0][4] = qdd1*(-4.3E1/1.0E3)-t25*(4.9E1/1.0E1)+t36+t37+t38+t39+qdd1*t12*(4.3E1/1.0E3)+qdd1*t13*2.881E-1-q3*qdd1*t13+qd1*qd2*t12*1.1524-qd1*qd2*t13*(4.3E1/2.5E2)-qd1*qd3*t13*2.0-q3*qd1*qd2*t12*4.0;
  A0[0][5] = sin(q1)*(4.9E1/5.0);
  A0[0][6] = t16*(-4.9E1/1.0E1)-t18*(4.9E1/1.0E1)+q3*qdd1*(2.41E2/4.0E2)+qd1*qd3*(2.41E2/2.0E2)+q3*qdd1*t19*(2.41E2/4.0E2)+qd1*qd3*t19*(2.41E2/2.0E2)-q3*qd1*qd2*t20*(2.41E2/1.0E2);
  A0[0][7] = t33+qdd3*t29*(2.41E2/4.0E2)-q3*qdd2*t30*(2.41E2/4.0E2)-qd2*qd3*t30*(2.41E2/1.0E2)-q3*t21*t29*(2.41E2/2.0E2);
  A0[0][8] = t48-t49*(4.9E1/1.0E1)+q3*qdd1*t20*(2.41E2/4.0E2)+qd1*qd3*t20*(2.41E2/2.0E2)+q3*qd1*qd2*t19*(2.41E2/1.0E2);
  A0[0][10] = -q1;
  A0[0][13] = -qd1;
  A0[0][16] = 2.0/(exp(qd1*-4.0E2)+1.0)-1.0;
  A0[0][17] = -t31-t32;
  A0[0][18] = qdd2*t30+t21*t29*2.0;
  A0[0][19] = -t33+t34+t35;
  A0[0][20] = -t36-t37-t38-t39+t46;
  A0[0][21] = -qdd2*t23-t21*t22*2.0;
  A0[0][22] = sin(q1-2.908373974667121E-1)*(-4.9E1/1.0E1)-sin(q1+2.908373974667121E-1)*(4.9E1/1.0E1)+qdd1*t22*(3.0/2.0E1)+qdd1*cos(t40)*(3.0/2.0E1)-qd1*qd2*t23*(3.0/1.0E1)-qd1*qd2*t52*(3.0/1.0E1);
  A0[0][23] = t41+qdd1*t12*(1.0/2.0)-qd1*qd2*t13*2.0;
  A0[0][24] = t41-qdd1*t19*(1.0/2.0)+qd1*qd2*t20*2.0;
  A0[0][25] = -qdd2;
  A0[0][26] = qdd1;
  A0[0][27] = -qdd1*t20-qd1*qd2*t19*4.0;
  A0[1][0] = qdd2*1.0735061E-1+qdd3*(4.3E1/1.0E3)-t5*1.41169+t6*1.41169+t16*(1.47E2/2.0E2)-t18*(1.47E2/2.0E2)-t26*2.107E-1-t42+t44-t45-q3*qdd2*5.762E-1-qd2*qd3*1.1524+qdd2*t8*8.643E-2+qdd2*t14-qdd2*t27*1.29E-2-qdd3*t27*(3.0/2.0E1)+t9*t43*1.29E-2+t11*t43*8.643E-2+t12*t43*2.47766E-2+t13*t43*8.115261E-2+t20*t43*(9.0/4.0E2)+q3*qd2*qd3*4.0-q3*qdd2*t8*(3.0/1.0E1)-qd2*qd3*t8*(3.0/5.0)-q3*t11*t43*(3.0/1.0E1)-q3*t12*t43*(4.3E1/5.0E2)-q3*t13*t43*5.762E-1+t13*t14*t43;
  A0[1][1] = q3*t16*2.95225-q3*t18*2.95225+qdd2*t14*3.6300625E-1+q3*qd2*qd3*1.452025+t14*t20*t43*3.6300625E-1;
  A0[1][2] = qdd2*(-5.762E-1)-t31+t32+q3*qdd2*2.0+qd2*qd3*4.0-qdd2*t8*(3.0/1.0E1)-t11*t43*(3.0/1.0E1)-t12*t43*(4.3E1/5.0E2)-t13*t43*5.762E-1+q3*t13*t43*2.0;
  A0[1][3] = t50+qdd1*t22*(4.3E1/1.0E3)+qdd1*t23*2.881E-1-q3*qdd1*t23;
  A0[1][4] = qdd2*(-4.3E1/5.0E2)-qdd3+t36+t46+t51-t9*t43*(3.0/1.0E1)-t12*t43*5.762E-1+t13*t43*(4.3E1/5.0E2)+q3*t12*t43*2.0;
  A0[1][6] = t16*(4.9E1/1.0E1)-t18*(4.9E1/1.0E1)+q3*qdd2*(2.41E2/2.0E2)+qd2*qd3*(2.41E2/1.0E2)+q3*t20*t43*(2.41E2/2.0E2);
  A0[1][7] = q3*qdd1*t30*(-2.41E2/4.0E2);
  A0[1][8] = qdd3*(2.41E2/4.0E2)+t48+t49*(4.9E1/1.0E1)-q3*t19*t43*(2.41E2/2.0E2);
  A0[1][9] = -q2;
  A0[1][12] = -qd2;
  A0[1][15] = 2.0/(exp(qd2*-4.0E2)+1.0)-1.0;
  A0[1][17] = t31-t32;
  A0[1][18] = qdd1*t30;
  A0[1][19] = t50;
  A0[1][20] = -t36-t46-t51+t9*t43*(3.0/1.0E1);
  A0[1][21] = -qdd1*t23;
  A0[1][22] = t23*t43*(3.0/2.0E1)+t43*t52*(3.0/2.0E1);
  A0[1][23] = t53;
  A0[1][24] = qdd2-t20*t43;
  A0[1][25] = -qdd1;
  A0[1][27] = t19*t43*2.0;
  A0[2][0] = qdd2*(4.3E1/1.0E3)+qdd3+t21*5.762E-1-t36+t43*2.881E-1-t46-q3*t21*2.0-q3*t43-qdd2*t27*(3.0/2.0E1)+t8*t21*(3.0/1.0E1)+t8*t43*(3.0/2.0E1)+t9*t43*(3.0/2.0E1)+t12*t43*2.881E-1-t13*t43*(4.3E1/1.0E3)-q3*t12*t43;
  A0[2][1] = qdd3*3.6300625E-1+t47*2.95225+t49*2.95225-q3*t21*7.260125E-1-q3*t43*3.6300625E-1-q3*t19*t43*3.6300625E-1;
  A0[2][2] = t21*-2.0-t43-t12*t43;
  A0[2][3] = qdd1*t22;
  A0[2][4] = -qdd2+t53;
  A0[2][6] = t21*(-2.41E2/2.0E2)-t43*(2.41E2/4.0E2)-t19*t43*(2.41E2/4.0E2);
  A0[2][7] = qdd1*t29*(2.41E2/4.0E2);
  A0[2][8] = qdd2*(2.41E2/4.0E2)-t20*t43*(2.41E2/4.0E2);
  A0[2][11] = -qd3;
  A0[2][14] = 2.0/(exp(qd3*-4.0E2)+1.0)-1.0;
