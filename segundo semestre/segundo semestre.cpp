#include<stdio.h>

int main(){

  float num1,num2,resultado;
  int op;
  
  printf("\n\t***calculadora***\n\t");
  printf("digite:\n1-somar\n2-subtrair\n3-dividir\n4-multiplicar\n0-sair\n");
  scanf("%d",&op);
  
  printf("digite o primeiro numero: ");
  scanf("%f",&num1);
  printf("digite o segundo numero: ");
  scanf("%f",&num2);
  
  
  if(op==1){
  	resultado=num1+num2;
  }
  else if(op==2){
  	resultado=num1-num2;
  }
  else if(op==3){
  	if(num1<num2){
  		printf("n�o e possivel fazer essa divi��o\n");
  		resultado=0;
	  }
	  else{
	  	resultado=num1/num2;
	  }
  }
  else if(op==4){
  	resultado=num1*num2;
  }
  else if(op==0){
  	return 0;
  }
  else{
  	printf("meu caro, as op��es s�o 0,1,2,3,4");
  }
 













}
