#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Programa_Sexo.C\n");
	
	int quant_hom=0,quant_mul=0,quant_tot=1;
	char nome,sexo;
	      
	while (quant_tot<=5){
			
		printf("\nDigite o seu nome:");
		scanf("%c",&nome);
		fflush(stdin);
		printf("\nDigite o seu sexo[m=Masculino e f=Feminino]:");
		scanf("%c",&sexo);
		fflush(stdin);
	
	quant_tot++;
	
		if (sexo=='f'){
		quant_mul++;
		}
	
		if (sexo=='m'){
		quant_hom++;
		}
		
}
		printf("\nTotal de Homens é:%d",quant_hom);
		printf("\nTotal de Mulheres é:%d",quant_mul);
	getch();
	return 0;
	}
