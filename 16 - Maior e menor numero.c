#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int y,x,z;
	
	printf(" Digite valor x: ");
	scanf ("%d",&x);
	
	printf (" digite valor y: ");
	scanf  ("%d",&y);
	
	printf ("digite valor z: ");
	scanf  ("%d",&z);
	
	// Maior numero
	
	if(x > y && x > z){
		printf ("\n O maior numero e: %d",x);
		
	}else if (y > x && y > z){
		printf ("\n O maior numero e: %d",y);
		
	}else if (z > x && z > y){
		printf ("\n O maior numero e: %d",z);
	}
	
	// menor numero	
	
	 if (x < y && x < z){
		printf (" \n O menor numero e: %d",x);
		
	}else if (y < x && y < z){
		printf (" \n O numero menor e: %d",y);
		
	}else if (z < x && z < y){
		printf ("\n O numero menor e: %d", z);
	}
	 
    return 0;    
}
