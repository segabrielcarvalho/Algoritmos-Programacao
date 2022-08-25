#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int raio,areaCirculo;
	
	printf("Digite o tamanho do raio do triangulo: ");
	scanf( "%i" , &raio);
	
	areaCirculo = ((raio*raio)*3.14);
	
	printf("\n\t A area do circulo é de: %i", areaCirculo);
}
