
x = -10:0.002:10;
y = -2*sigmf(x,[400 0])+1;
%y = 1*sign(x);
plot(x,y)
grid('on')
xlabel('sigmf, P = [2 4]')

ylim([-1.05 1.05])
lim = 0.02;
xlim([-lim lim])