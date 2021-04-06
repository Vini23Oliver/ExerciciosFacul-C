#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//variavel
	int n,cont,maior=0,menor,soma = 0;
	float media;
	
	// desenvolvimento
	cont = 1;
	
	while (cont <= 5){
		
		printf ( "digite o %do. valor: ", cont);
		scanf   ("%d", &n);
			if (n > maior){
				maior = n;
			
			}else{
				menor = n;
				
			}
		soma = soma + n;
		media = soma / 5;						
		cont++;

	}
		printf ("\n maior valor e: %d", maior );
		printf ("\n menor valor e: %d", menor );
		printf ("\n a media dos numeros e: %.1f", media);
		
		return 0;
}

