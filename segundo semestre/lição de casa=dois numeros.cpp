#include<stdio.h>

void somar(int n1, int n2){
	printf("\n%d + %d = %d",n1,n2,n1+n2);
	
	return 0;
}

int main(){
	int num1,num2;
	
	printf("digite o valor: ", num1);
	scanf("%d",&num1);
	printf("digite o segundo valor please: ", num2);
	scanf("%d",&num2);
	
	
	somar(num1,num2);
	
	
	
	
	
	
	
}
