#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,cont=1,soma,apres=1;
	
	printf (" digite um numero inteiro: ");
	scanf  ("%d",&n);
	
	while(cont <= n ){
		printf("%d ", apres);
		apres = apres + 1;
		soma = apres + n;
		cont++;
		
		
	}
	printf ("\nsoma e %d", soma);
	return 0;
}
