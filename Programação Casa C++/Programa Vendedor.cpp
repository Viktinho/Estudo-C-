#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main (){


setlocale(LC_ALL, "portuguese");
printf ("Programa_Vendedor.C\n\n");

char vendedor [30];
float Total_Vendas, Comiss, Salario_F, Salario_C;

printf ("Digite o nome do vendedor\n");
scanf ("%s", &vendedor);

printf("Digite o salario fixo do vendedor\n");
scanf("%f", &Salario_F);

printf("Digite o total de vendas em R$\n");
scanf("%f", &Total_Vendas);

Comiss = Total_Vendas / 100 * 15;
Salario_C = Salario_F + Comiss;

printf("Nome do Funcion�rio: %s \n\n", vendedor);
printf("Sal�rio Fixo: R$ %.2f\n\n", Salario_F);
printf("Comiss�o: R$ %.2f \n\n", Comiss);
printf("Sal�rio Total: R$ %.2f", Salario_C);

getch();
return 0;
}
