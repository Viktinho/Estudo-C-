#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "portuguese");
	printf ("Programa:Rod�zio.c\n\n");
	
	int placa;
	
	printf ("Digite os n�meros da placa do autom�vel: ");
	scanf("%d", &placa);
	
	placa = (placa % 10);
	switch(placa){
		case 1: case 2:
			printf("Rod�zio na Segunda-feira");
			break;
		case 3: case 4:
			printf("Rod�zio na Ter�a-feira");
			break;
		case 5: case 6:
			printf("Rod�zio na Quarta-feira");
			break;
		case 7: case 8:
			printf("Rod�zio na Quinta-feira");
			break;
		case 9: case 0:
			printf("Rod�zio na Sexta-feira");
			break;
	}
	getch ();
	return 0;
}
