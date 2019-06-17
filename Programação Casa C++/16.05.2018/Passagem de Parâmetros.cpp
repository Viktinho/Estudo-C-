#include <stdio.h>
#include <conio.h>

void calc(float a, float b, char oper, float *resp) {
	switch ( oper){
		case '+' : *resp = a + b ; break;
		case '-' : *resp = a - b ; break;
		case '*' : *resp = a * b ; break;
		case '/' : *resp = a / b ; break;	
	}
}

int main () {
	float x, y, result = 0;
	printf ("Primeiro numero: ");
	scanf ("%f", &x);
	printf ("Segundo numero: ");
	scanf ("%f", &y);
	if ((x > 0) && (y > 0)) {
		calc (x, y, '+', &result);
		printf ("\nAdicao: %.1f\n", result);
		calc (x, y, '-', &result);
		printf ("\nSubtracao: %.1f\n", result);
		calc (x, y, '*', &result);
		printf ("\nMultiplicacao: %.1f\n", result);
		calc (x, y, '/', &result);
		printf ("\nDivisao: %.1f\n", result);
	}
}
