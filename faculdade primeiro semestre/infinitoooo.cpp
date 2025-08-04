#include <stdio.h>

int man(){
	int num;
	printf("Digite um Numero: ");
	scanf("%d", &num);
	while (num!=0)
	{
		printf ("O Numero lido foi = %d\n\n ",num);
		printf ("Digite um numero: ");
		scanf("%d",&num);
	}
	return 0;
}
