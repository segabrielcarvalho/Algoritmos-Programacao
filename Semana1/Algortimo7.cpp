#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int salarioAntigo, porcentagemDeAumento, calculoDoNovoSalario, calculoDeImposto, calculoBonificacao;
	
	printf("Digite o sal�rio do funcion�rio: ");
	scanf( "%i" , &salarioAntigo);
	
	calculoBonificacao = (salarioAntigo+50);
	calculoDeImposto = (calculoBonificacao*0.90);
	
	printf("\n\t O novo sal�rio desse funcion�rio vai ser de R$: %i", calculoDeImposto);
}
