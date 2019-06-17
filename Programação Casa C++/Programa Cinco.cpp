#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	printf ("Programa Cinco\n\n");
	
	int I;
	
	for (I=1; I<=60; I=I+1){
		if (I % 5 == 0){
			printf ("%d É multiplo de 5\n", I);
		}
	}
	getch ();
	return 0;
}

