#include <stdio.h>
int main (){
	int main[3][4],lin,col,contpar=0,contimpar=0;
	printf("\nDigite valor para os elementos da matriz\n\n");
	for (lin=0; lin<3;lin++)
	{
	
	for (col=0; col<4;col++)
	{
		printf("\nElemento[%d][%d] = ",lin,col);
		scanf("%d"&mat[lin][col]);
	}
}
	printf("\n\n********Saida de Dados*********\n\n");
	for ( lin=0; lin<3; lin++){
		for (col=0; col<4; col++)
		{
			if(mat[lin][col] % 2==0)
			contpar++;
			else 
			contimpar++;
		}
	}
	printf("")
}
