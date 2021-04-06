#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int n1,Div2,Div3;
	
	printf (" Digite um numero: ");
	scanf  ("%d",&n1);
	
	Div2 = n1 % 2;
	Div3 = n1 % 3;
	
	if(Div2 == 0 && Div 3 == 0){
		printf (" O numero e divisivel por 2 e 3");
    	
	}else if ( Div2 == 0 || Div 3 == 0){
	
    	}if (Div2 == 0){
			printf (" Numero divisivel por 2");			
		 
		}else{
			printf (" numero divisivel po 3");
		
	}
	
	return 0;
}
