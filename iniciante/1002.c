#include <stdio.h>

int main(){
	double area, raio;
	scanf("%lf", &area);
	raio =  3.14159 * area * area;
	printf("A=%.4f\n", raio);
	return 0;
}