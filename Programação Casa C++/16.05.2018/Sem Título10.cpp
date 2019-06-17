#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

void func_inverter (int *x, int *y) {
	printf ("x = %d	y = %d\n\n", *y, *x);
}

int main (){
	setlocale (LC_ALL, "Portuguese");
	printf ("\nPrograma Inverter.c\n\n");
	int x, y;
	printf ("Digite um número inteiro: ");
	scanf ("%d", &x);
	printf ("Digite um número inteiro: ");
	scanf ("%d", &y);
	printf ("x = %d y = %d\n\n", x, y);
	func_inverter (&x, &y);
	printf ("x = %d y = %d\n\n", x, y);
	getch ();
	return 0;
}

