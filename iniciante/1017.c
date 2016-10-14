#include <stdio.h>

int main() {
	int horas, velo;
	float gasto;
	scanf("%i %i", &horas, &velo);
	gasto = (horas * velo)/ 12.0;
	printf("%.3f\n", gasto);
	return 0;
}