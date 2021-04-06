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
	
	if(x < y && y < z){
		printf("%d %d %d ",x,y,z);
		
	}else if (x > y && y > z){
		printf ("%d %d %d ",z,y,x);
		
	}else if (x > y && y < z ){
		printf ("%d %d %d ", y,z,x);
				
	}else if (y < x && x < z){
		printf ("%d %d %d ",y,x,z);
		
	}else if (y > x && x > z){
		printf ("%d %d %d ", z,x,y);
		
	}else if (y > x && x < z){
		printf ("%d %d %d ", x,z,y);
		
	}else if (z > x && x > y){
		printf("%d %d %d ", y,x,z);
		
	}else if (z > x && x < y){
		printf ("%d %d %d ",x,y,z);
		
	}else if (z < x && x > y){
		printf ("%d %d %d ",z,y,x);
	}
	return 0;
}
