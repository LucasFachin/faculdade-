#include<stdio.h>

int global=10; //variavel global   

int mostrarGlobal(){    /// pode ser usado o void e tambem tem o float
	int numero=3;
	int resultado;
	printf("\nO valor da global eh %d",global);
	resultado=numero+global;
	return resultado;
}

int main(){
	int num=1;
	int resul;
 //	printf("num=%d",num);
 
 //// local
 printf("variavel local num=%d",num);
 printf("\n a variavel global = %d\n\n\n",global);
 resul=mostrarGlobal();
 	printf("\nresultado=%d",resul);
 	return 0;
 
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
}
