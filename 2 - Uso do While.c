#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int N,Cont, apres;

apres = 1;

 printf(" Digite um numero para a contagem dos impares: ");
 scanf("%d", &N);
 
 while(Cont <= N){
 	printf("%d ",apres);
 	apres=apres+2;
 	Cont++;
 }
	return 0;
}
