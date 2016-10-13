#include <stdio.h>

int main() {
	int number, horas;
	float salario;
	scanf("%i", &number);
	scanf("%i", &horas);
	scanf("%f", &salario);
	salario = salario * horas;
	printf("NUMBER = %i\n", number);
	printf("SALARY = U$ %.2f\n", salario);
	return 0;
}