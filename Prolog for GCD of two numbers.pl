gcd(X,Y):-X=Y,write('GCD of two numbers is '),write(X);
X=0,write('GCD of two numbers is '),write(Y);
Y=0,write('GCD of two numbers is '),write(X);
Y>X,Y1 is Y-X,gcd(X,Y1);
X>Y,Y1 is X-Y,gcd(Y1,Y).


output:

gcd of 4,6:
gcd of two numbers is 2
gcd of 8,0:
gcd of two numbers is 8
