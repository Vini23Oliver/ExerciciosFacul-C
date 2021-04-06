#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int I,maior, contf=0, cont_intervalo;
	float porc_f_intervalo;
	char sexo [1];
	
	
	
	printf(" digite a idade: ");
	scanf ("%d, &I");
	
	maior = I;
	
	while(I != -1 ){
		printf (" Digite o sexo: ( masculino - M, feminino - F): ");
		scanf ("%s", sexo);
		
		if ( sexo == 'F'){
			contf++;
		}
		
		if (sexo == 'F' && idade >= 18 && <= 35);
		contf++;
		
		printf (" Digite a idade: ");
		scanf ("%d", &I);
		
		if (I > maior){
			maior = I; 
		}
		
		
	}
	perc_f_intervalo = cont_intervalo / contf) * 100
	printf ("programa finalizada");		
	printf ("a maior idade digitada e: %d", maior);
	printf ("")
		
	return 0;
}
