#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, cont, par,soma;
	
	printf (" Digite um numero para a soma dos pares: ");
	scanf  ("%d",&n);
	
 par = 1;
 while(cont <= n ){
 	printf("%d ", par);
 	par = par + 1;
 	soma = n + 1 ;
  	cont++;
 }
 printf ("\n %d", soma);
    return 0;	
 }

