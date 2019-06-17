#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int x;

void dobro (int n);

int main (){
	setlocale (LC_ALL, "Portuguese");
	printf ("\nPrograma dobro.c\n\n");
	x = 7;
	printf ("x = %d\n\n", x);
	dobro (x);
	printf ("x = %d\n\n", x);
	getch ();
	return 0;
}

void dobro (int n){
	printf ("x = %d		n = %d\n", x, n);
	n = 2 * n;
	printf ("x = %d		n = %d\n\n", x, n);
}
