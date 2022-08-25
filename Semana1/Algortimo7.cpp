#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int salarioAntigo, porcentagemDeAumento, calculoDoNovoSalario, calculoDeImposto, calculoBonificacao;
	
	printf("Digite o salário do funcionário: ");
	scanf( "%i" , &salarioAntigo);
	
	calculoBonificacao = (salarioAntigo+50);
	calculoDeImposto = (calculoBonificacao*0.90);
	
	printf("\n\t O novo salário desse funcionário vai ser de R$: %i", calculoDeImposto);
}
