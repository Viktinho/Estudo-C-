#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	printf ("Programa Intervalo\n\n");
	
	int N1, N2;
	printf ("\nInoforme o primeiro número\n");
	scanf ("%d", &N1);
	printf ("\nInoforme o seundo número\n");
	scanf ("%d", &N2);
	if (N1 > N2){
		printf ("\n\n Primeiro número deve ser menor que o segundo\n");
	}
	else {
		while (N1 <=N2){
			printf("%d", N1);
			N1=N1 + 1;
		}
	}
	getch ();
	return 0;
}
