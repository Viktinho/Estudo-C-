#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Programa:Metros.c\n\n");
	
	float polegada, pe, jarda, milha, metros;
	
	printf("Quantos metros você tem? \n");
	scanf("%f", &metros);
	
	polegada = 0.254;
	pe = 12 * polegada;
	jarda = 3 * pe;
	milha = 1760 * jarda;
	
	polegada = metros/polegada;
	pe = metros/pe;
	jarda = metros/jarda;
	milha = metros/milha;
	
	printf ("\nResultado em polegadas: %.2f\n", polegada);
	printf ("Resultado em pés: %.2f\n", pe);
	printf ("Resultado em jardas: %.2f\n", jarda);
	printf ("Resultado em milhas: %.2f\n", milha);
	
	getch ();
	return 0;
}
