#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int a,b,c,sm,md;
		
	printf("Digite a 1� nota: ");
	scanf( "%i" , &a);
	printf("Digite a 2� nota: ");
	scanf( "%i", &b);
	printf("Digite a 3� nota: ");
	scanf( "%i", &c);
	
	sm = (a+b+c);
	md = (sm/3);
	
	printf("\n\t A M�dia aritm�tica �: %i", md);
}
