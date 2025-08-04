#include <stdio.h>
#include <stdlib.h>
int main()
{
	float nota1,nota2,nota3,media;
	
	printf("digite nota1= ");
	scanf("%f", &nota1);
	printf("digital nota2= ");
	scanf("%f", &nota2);
	printf("digital nota3= ");
	scanf("%f",&nota3);
	media=(nota1+nota2+nota3)/3;
	if(media>7){
		printf("APROVADO com media %.2f\n\n",media);
	}
	else{
		printf("REPROVADO com media %.2f\n\n",media);
	}
	return 0;
}
