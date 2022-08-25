#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int a,b,c,sm,md;
		
	printf("Digite a 1º nota: ");
	scanf( "%i" , &a);
	printf("Digite a 2º nota: ");
	scanf( "%i", &b);
	printf("Digite a 3º nota: ");
	scanf( "%i", &c);
	
	sm = (a+b+c);
	md = (sm/3);
	
	printf("\n\t A Média aritmética é: %i", md);
}
