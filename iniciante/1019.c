#include <stdio.h>

int main() {
	int num1, resto = 0, resto1 = 0;
	scanf("%i", &num1);
	resto = num1 % 3600;
	resto1 = resto % 60;
	printf("%i:%i:%i\n",(num1/3600), (resto/60), resto1);
	return 0;
}