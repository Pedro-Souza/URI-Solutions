#include <stdio.h>

int main() {
	int cod, number;
	float valor, pagar;
	scanf("%i %i %f", &cod, &number, &valor);
	pagar = number * valor;
	scanf("%i %i %f", &cod, &number, &valor);
	pagar = pagar + number * valor;
	printf("VALOR A PAGAR: R$ %.2f\n", pagar);
	return 0;
}