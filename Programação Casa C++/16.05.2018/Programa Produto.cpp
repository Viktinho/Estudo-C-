#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int ano (int nascimento, int atual) {
	printf ("Data de nascimento = %d \nAno atual = %d\n\n", nascimento, atual);
	return atual - nascimento;
}

int main () {
	setlocale (LC_ALL, "Portuguese");
	printf ("znPrograma produto.c\n");
	int nascimento, atual, idade;
	printf ("Digite seu ano de nascimento: ");
	scanf ("%d", &nascimento);
	printf ("Digite o ano atual: ");
	scanf ("%d", &atual);
	idade = ano (nascimento, atual);
	printf (" Sua idade é: %d", idade);

	getch ();
	return 0;
}
