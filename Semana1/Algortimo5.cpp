#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int salarioAntigo, porcentagemDeAumento, calculoDoNovoSalario, trasnformarPorcentagem;
	
	printf("Digite o sal�rio do funcion�rio: ");
	scanf( "%i" , &salarioAntigo);
	
	printf("Digite a porcentagem de aumento(Somente n�meros): ");
	scanf( "%i" , &porcentagemDeAumento);
	
	trasnformarPorcentagem = ((porcentagemDeAumento/100)+1);
	calculoDoNovoSalario = (salarioAntigo*trasnformarPorcentagem);
	
	printf("\n\t O antigo sal�rio desse funcion�rio � de R$: %i", salarioAntigo);
	printf("\n\t A porcentagem de Aumento foi de: %i", porcentagemDeAumento ,"%");
	printf("\n\t O novo sal�rio desse funcion�rio vai ser de R$: %i", calculoDoNovoSalario);
}
