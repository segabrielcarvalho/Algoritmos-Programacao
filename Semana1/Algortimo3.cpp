#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int a,b,c,p1,p2,p3, sp, mp, mp2;
	
	printf("Digite a 1� nota: ");
	scanf( "%i" , &a);
	printf("Digite o peso da 1� nota: ");
	scanf( "%i" , &p1);
	
	printf("Digite a 2� nota: ");
	scanf( "%i", &b);
	printf("Digite o peso da 2� nota: ");
	scanf( "%i" , &p2);
	
	printf("Digite a 3� nota: ");
	scanf( "%i", &c);
	printf("Digite o peso da 3� nota: ");
	scanf( "%i" , &p3);
	
	mp = ((a*p1)+(b*p2)+(c*p3));
	sp = (p1+p2+p3);
	mp2 = (mp/sp);
	
	printf("\n\t A M�dia ponderada �: %i", mp2);
}
