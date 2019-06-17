#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

float prod (float *x, float *y) {
	printf ("*x = %.1f *y = %.1f\n\n", *x, *y);
	return *x * *y;
}

int main () {
	setlocale (LC_ALL, "Portuguese");
	printf ("znPrograma produto.c\n");
	float a, b, c;
	a = 2;
	b = 110;
	c = prod (&a, &b);
	printf ("a = %.1f b = %.1f c = %.1f", a, b, c);
	getch ();
	return 0;
}
