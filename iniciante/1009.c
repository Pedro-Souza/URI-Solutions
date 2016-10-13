#include <stdio.h>

int main() {
	char nome[50];
	double vendas, salario;
	scanf("%s", &nome);
	scanf("%lf", &salario);
	scanf("%lf", &vendas);
	salario = salario + vendas * (15.0/100);
	printf("TOTAL = R$ %.2f\n", salario);
	return 0;
}