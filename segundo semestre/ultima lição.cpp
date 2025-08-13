#include<stdio.h>

void menu(){
	
	printf("\t\t****Calculadora****");
	printf("\n1-soma \n2-subtrair \n3-multiplicar \n4-dividir");
}

int opcao(){
	printf("\nDigite uma das opcoes: ");
	scanf("%f",&op); // erro na compilação
}


void soma(float x, float y){
	printf("\n%f + %f =%f",x,y,x+y);
}

void sub(float x, float y){
	printf("\n%.2f - %.2f =%.2f",x,y,x-y);
}


int main({
int opc;
float num1,num2;

menu();
opc=opcao();

printf("digite um valor para num1: ");
scanf("%f", &num1);
printf("digite um valor para num2: ");
scanf("%f", &num2);
opcao();

if(opc==1){
	soma();
}
else if(opc==2){
	sub();
}









}
