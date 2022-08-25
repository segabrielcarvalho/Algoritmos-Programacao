#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int depositoAntigo, taxaDeJuros, calculoDoNovoDeposito, trasnformarPorcentagem;
	
	printf("Digite o valor do deposito: ");
	scanf( "%i" , &depositoAntigo);
	
	printf("Digite a taxa de Juros(Somente números): ");
	scanf( "%i" , &taxaDeJuros);
	
	trasnformarPorcentagem = ((taxaDeJuros*depositoAntigo/100));
	calculoDoNovoDeposito = (depositoAntigo+trasnformarPorcentagem);
	printf("\n\t O valor do antigo deposito foi de: %i", depositoAntigo);
	printf("\n\t A taxas de juros foi de: %i", trasnformarPorcentagem);
	printf("\n\t O novo salário desse funcionário vai ser de R$: %i", calculoDoNovoDeposito);
}
