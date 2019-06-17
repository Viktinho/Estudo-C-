#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int x;

void por_ref (int *a) {
	printf ("x = %d		*a = %d\n", x, *a);
	*a = 5;
	printf ("x = %d		*a = %d\n\n", x, *a);
}

int main (){
	setlocale (LC_ALL, "Portuguese");
	printf ("\nPrograma por_ref.c\n\n");
	x = 10;
	printf ("x = %d\n\n", x);
	por_ref (&x);
	printf ("x = %d\n\n", x);
	getch ();
	return 0;
}
