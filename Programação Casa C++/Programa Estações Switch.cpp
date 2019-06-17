#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	printf("Programa:Estacoes.C\n\n");
	
	int mes;
	printf ("Digite o mês no formato númerico: ");
	scanf("%d", &mes);
	switch(mes){
		case 9:case 10:case 11:
			printf("A Estação Escolhida é: Primavera!");
			break;
		case 12:case 1:case 2:
			printf("A Estação Escolhida é: Verão!");
			break;
		case 3:case 4:case 5:
			printf("A Estação Escolhida é: Outono!");
			break;
		case 6:case 7:case 8:
			printf("A Estação Escolhida é: Inverno!");
			break;
		default:
			printf("Valor digitado não corresponde a um mês válido");	
	}
	getch ();
	return 0;
}
