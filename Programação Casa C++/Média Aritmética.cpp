#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main () {
	float vetor1 [] = {33,21,45,13,3};
	float vetor2 [] = {8,4,16,28,12};
	float medarit [5], soma, medgeral;
	int i;
	soma = 0;
	for (i = 0;i<5;i++) {
		medarit [i] = (vetor1 [i] + vetor2[i])/2;
		soma = soma + medarit [i];
	}
	medgeral = soma /5;
	printf ("Media geral = %0.1f\n", medgeral);
	for (i=0;i<5;i++)
		printf("\nPosicao [%d] - Media Aritmetica = %0.1f ", i, medarit [i]);
	getch ();
	return 0;
}
