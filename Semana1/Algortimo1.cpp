#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int a,b,c,sm,sb,mt,dv,d;
	
	printf("Digite o 1� valor inteiros: ");
	scanf( "%i" , &a);
	printf("Digite o 2� valor inteiros: ");
	scanf( "%i", &b);
	printf("Digite o 3� valor inteiros: ");
	scanf( "%i", &c);
	printf("Digite o 4� valor inteiros: ");
	scanf( "%i", &d);
	
	sm = (a+b+c+d);
	
	printf("\n\tOs Valores digitados s�o: %i %i %i %i", a,b,c);
	printf("\n\t A Soma �: %i", sm);
}
