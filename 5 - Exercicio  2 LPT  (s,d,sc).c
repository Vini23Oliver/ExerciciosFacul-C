
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// variavel
	
	int cont;
	float cs,s,d,results,resultd;
	char sai;
	
	// desenvolvimento
	
    cont=1;	
	do {
		printf (" Qual o valor de saldo: \n");
		scanf  ("%f",&cs);
		
		printf (" Qual o valor de saque, (se nao ouver saque, digite o numero 0): ");
		scanf  ("%f",&s);
		results = (cs - s);
		printf (" - saldo com saque e: %.2f \n", results);
		printf (" -----------------------------------------------------------------------------\n");
		
		
		printf (" Qual do valor do deposito, ( se nao ouver deposito, digite o numero 0): ");
		scanf  ("%f",&d);
		resultd = (cs + d - s);
		printf ("  - saldo com deposito e : %.2f \n", resultd); 
		printf ("-------------------------------------------------------------------------------\n");
		
		printf (" digite 1 para sair: ");
		scanf  ("%c", &sai);
	    cont++;
	    
	} while ( cont == sai );
	
	
	
	
	return 0;
}
