#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		// variavel
	
	int x,cont,soma;
	
	// desenvolvimento
	
	    printf ("Digite um numero inteiro: ");
		scanf ("%d", x);
	
	cont = 1;
	do{
		soma = soma + cont;
		printf ("A soma desses numeros inteiro e: %d", soma);	
	
	}while (cont <= x);
		
	return 0;
}
