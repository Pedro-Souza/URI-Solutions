#include <stdio.h>

int main() {
	int num1, result = 0, result1 = 0;
	scanf("%i", &num1);
	result = num1 % 365;
	printf("%i ano(s)\n", num1/365);
	printf("%i mes(es)\n", result/30);
	result1 = result % 30;
	printf("%i dia(s)\n", result1);
	return 0;
}