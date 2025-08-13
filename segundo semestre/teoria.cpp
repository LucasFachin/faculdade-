#include<stdio.h>

void dobrar(int x){ //int x =num
	int resultado=x*2;
	printf("\nfora da funcao= %d", resultado );
}

int main(){
	
	int num=5;
	int resultado;
	resultado=num*2;
	
	printf("Dentro da funcao= %d\n\n\n", resultado);
	
	dobrar(num);
	
	
	
	
	
	
	
	
	
	
	
	
	
}
