#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	printf ("Programa_Anos.C\n\n");
	int nasc, idade;
	printf ("Em que ano você nasceu?\n\n");
	scanf("%d", &nasc);
	idade = 2018 - nasc;
	
	printf ("Você tem %d anos e nasceu em %d.\n", idade, nasc);
	getch ();
	return 0;
}

