#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
	int a,b,c, maiorab;
	scanf("%i %i %i", &a, &b, &c);
	maiorab = (a+b + abs(a-b)) / 2;
	maiorab = (maiorab + c + abs(maiorab -c)) / 2;
	printf("%i eh o maior", maiorab);
	return 0; 
}