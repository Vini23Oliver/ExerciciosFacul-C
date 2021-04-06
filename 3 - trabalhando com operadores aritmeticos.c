#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1,n2,soma,sub,mult,div;
	
	printf ("Digite o primeiro valor: ");
	scanf ("%f", &n1);
	
	printf ("Digite outro valor: ");
	scanf ("%f", &n2);
	
	//soma
	soma = n1+n2;
	printf ("a soma entre os valores e: %f", soma,5.2);
	
	//subtração
	sub = n1 - n2;
	printf ("\n a subtracao entre os numeros e: %f", sub,5.2);
	
	//multiplicação
	mult = n1*n2;
	printf ("\n a multiplicacao entre os numeros e: %f", mult);
	
	//divisao
	div = n1/n2;
	printf("\n a divisao dos numeros e: %f", div);
	return 0;
}
