#include <stdio.h>

int main() {
	double R;
	scanf("%lf", &R);
	R = (4/3.0) * 3.14159 *R * R* R;
	printf("VOLUME = %.3f\n", R);
	return 0;
}