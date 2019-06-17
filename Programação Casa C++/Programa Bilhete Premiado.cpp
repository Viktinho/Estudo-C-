#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "portuguese");
	printf ("Programa_Bilhete.c\n\n");
		int p1, p2, vencedor;
	printf ("Escreva o primeiro número sorteado: ");
	scanf("%d", &p1);
	printf ("Escreva o segundo número sorteado: ");
	scanf("%d", &p2);
	vencedor = (p1 % 100)*(p2 % 100);
	printf ("Bilhete premiado: %d", vencedor);
	getch ();
	return 0;
}
