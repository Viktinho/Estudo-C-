#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#define T 5
int main ( ) {
	setlocale (LC_ALL, "Portuguese");
	printf (" Programa Vetor15\n\n");
	float vetor [T];
	int i;
	
	printf ("Digitação dos valores do vetor\n");
	for ( i=1 ; i<=T ; i++ ) {
		scanf ("%f", &vetor[i]);
	}
			
	for ( i=1 ; i<=T ; i++ ) {
		printf ("\nVetor %.2f", vetor [i]);
		vetor [i] = vetor [i] /2;
	}
	
	printf ("\n\nValores atuais do vetor\n");
	for ( i=1 ; i<=T ; i++ ){
		printf ("\nVetor %.2f", vetor [i]);
	}
	
	getch ();
	return 0;
}
