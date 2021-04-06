#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// variavel
	int data_nasc, valida;
	
	//  desenvolvimento
	do{
	
	printf (" Digite uma data de nascimento \n");
	scanf  ("%d",&data_nasc);
	
	} while ( data_nasc < 1890 || data_nasc > 2020);
	
	valida = data_nasc % 4;
	
	if (valida == 0) {
		printf (" ano bissexto");
	}else{
		printf (" nao bissexto");
	} 
	
		return 0;
}
