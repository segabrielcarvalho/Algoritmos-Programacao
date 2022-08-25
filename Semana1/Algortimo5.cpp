#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int salarioAntigo, porcentagemDeAumento, calculoDoNovoSalario, trasnformarPorcentagem;
	
	printf("Digite o salário do funcionário: ");
	scanf( "%i" , &salarioAntigo);
	
	printf("Digite a porcentagem de aumento(Somente números): ");
	scanf( "%i" , &porcentagemDeAumento);
	
	trasnformarPorcentagem = ((porcentagemDeAumento/100)+1);
	calculoDoNovoSalario = (salarioAntigo*trasnformarPorcentagem);
	
	printf("\n\t O antigo salário desse funcionário é de R$: %i", salarioAntigo);
	printf("\n\t A porcentagem de Aumento foi de: %i", porcentagemDeAumento ,"%");
	printf("\n\t O novo salário desse funcionário vai ser de R$: %i", calculoDoNovoSalario);
}
