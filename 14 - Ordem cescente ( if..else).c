#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x,y,Dif;
	
	printf(" digite um numero: ");
	scanf ("%d",&x);

	printf(" digite outro numero: ");
	scanf ("%d",&y);
	
	if (x <= y ){
		printf ("A sequencia em ordem crescente e: %d %d",x,y);
		Dif = ("int", x - y);
		printf("\n A diferença entre os numeros e: %d", Dif);
	}else{
		printf (" A sequencia em ordem crescente e: %d %d",y,x);
		Dif = ("int", y - x);
		printf("\n A diferença entre os numeros e: %d", Dif);
	}	
	return 0;
}
