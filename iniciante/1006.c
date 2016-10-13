#include <stdio.h>

int main() {
	float A,B,C,MEDIA;
	scanf("%f", &A);
	scanf("%f", &B);
	scanf("%f", &C);
	MEDIA = (A* 2.0 + B * 3.0 + C * 5.0) / 10.0;
	printf("MEDIA = %.1f\n", MEDIA);
	return 0;
}