#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int base, altura, areaTriangulo;
	
	printf("Digite o tamanho da base do triangulo: ");
	scanf( "%i" , &base);
	printf("Digite o tamanho da altura do triangulo: ");
	scanf( "%i" , &altura);
	
	areaTriangulo = ((base*altura )/2);
	
	printf("\n\t A area do triangulo é de: %i", areaTriangulo);
}
