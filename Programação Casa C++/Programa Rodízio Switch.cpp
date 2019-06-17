#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "portuguese");
	printf ("Programa:Rodízio.c\n\n");
	
	int placa;
	
	printf ("Digite os números da placa do automóvel: ");
	scanf("%d", &placa);
	
	placa = (placa % 10);
	switch(placa){
		case 1: case 2:
			printf("Rodízio na Segunda-feira");
			break;
		case 3: case 4:
			printf("Rodízio na Terça-feira");
			break;
		case 5: case 6:
			printf("Rodízio na Quarta-feira");
			break;
		case 7: case 8:
			printf("Rodízio na Quinta-feira");
			break;
		case 9: case 0:
			printf("Rodízio na Sexta-feira");
			break;
	}
	getch ();
	return 0;
}
