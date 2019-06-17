#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

void func_inverter (int *x, int *y) {
	
	printf ("O valor de x é: %d e o valor de y é: %d\n\n", *y, *x);
}

int main (){
	setlocale (LC_ALL, "Portuguese");
	printf ("\nPrograma Inverter.c\n\n");
	int x, y;
	printf ("Digite um número inteiro: ");
	scanf ("%d", &x);
	printf ("Digite um número inteiro: ");
	scanf ("%d", &y);
	printf ("Valor de x: %d \nValor de y: %d\n\n", x, y);
	func_inverter (&x, &y);
	printf ("%d %d", x, y);
	getch ();
	return 0;
}
