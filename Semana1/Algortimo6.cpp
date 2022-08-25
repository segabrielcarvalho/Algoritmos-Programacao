#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int salarioAntigo, porcentagemDeAumento, calculoDoNovoSalario, calculoDeImposto;
	
	printf("Digite o salário do funcionário: ");
	scanf( "%i" , &salarioAntigo);
	
	calculoDoNovoSalario = (salarioAntigo*1.05);
	calculoDeImposto = (calculoDoNovoSalario*0.93);
	
	printf("\n\t O novo salário desse funcionário vai ser de R$: %i", calculoDeImposto);
}
