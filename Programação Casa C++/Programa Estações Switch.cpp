#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	printf("Programa:Estacoes.C\n\n");
	
	int mes;
	printf ("Digite o m�s no formato n�merico: ");
	scanf("%d", &mes);
	switch(mes){
		case 9:case 10:case 11:
			printf("A Esta��o Escolhida �: Primavera!");
			break;
		case 12:case 1:case 2:
			printf("A Esta��o Escolhida �: Ver�o!");
			break;
		case 3:case 4:case 5:
			printf("A Esta��o Escolhida �: Outono!");
			break;
		case 6:case 7:case 8:
			printf("A Esta��o Escolhida �: Inverno!");
			break;
		default:
			printf("Valor digitado n�o corresponde a um m�s v�lido");	
	}
	getch ();
	return 0;
}
