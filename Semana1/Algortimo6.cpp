#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int salarioAntigo, porcentagemDeAumento, calculoDoNovoSalario, calculoDeImposto;
	
	printf("Digite o sal�rio do funcion�rio: ");
	scanf( "%i" , &salarioAntigo);
	
	calculoDoNovoSalario = (salarioAntigo*1.05);
	calculoDeImposto = (calculoDoNovoSalario*0.93);
	
	printf("\n\t O novo sal�rio desse funcion�rio vai ser de R$: %i", calculoDeImposto);
}
