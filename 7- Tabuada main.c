#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, cont, resul;
	
	printf (" ESTRUTURA DE REPETICAO - DO .. WHILE \n");
	printf ("");
	printf (" digite um numero inteiro para a apresentação da tabuada: \n");
	scanf  ("%d", &num);
	
	cont = 1;
	do{
		resul = num * cont;
		printf ("%d x %d = %d \n", cont, num, resul);
		cont++;
		
		
	} while (cont <= 10); 
	  
	
	return 0;
}
