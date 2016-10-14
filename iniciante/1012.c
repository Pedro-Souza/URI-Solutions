#include <stdio.h>

int main() {
	double a,b,c,pi = 3.14159,m,n,o,p,q;
	scanf("%lf %lf %lf", &a, &b, &c);
	m = (1.0/2) * (a*c);
	n = pi*(c*c);
    o = (1.0/2)*(a+b)*c;
    p = b*b;
	q = a*b;
	printf("TRIANGULO: %.3lf\n", m);
	printf("CIRCULO: %.3lf\n", n);
	printf("TRAPEZIO: %.3lf\n", o);
	printf("QUADRADO: %.3lf\n", p);
	printf("RETANGULO: %.3lf\n", q);
	return 0;
}