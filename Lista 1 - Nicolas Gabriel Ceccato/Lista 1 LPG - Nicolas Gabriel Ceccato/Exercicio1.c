#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x, y;
	
	printf("digite as coordenadas x e y de um ponto: ");
	scanf("%f%f", &x, &y);
	
	if ((x == 0) && (y == 0)){
		
		printf("Origem\n");
		
	}
	if ((x == 0) && (y != 0)){
			
		printf("Eixo Y\n");
			
		}
	if ((x != 0) && (y == 0)){
			
		printf("Eixo X\n");
			
		}
	else {
		
		if ((x > 0) && (y > 0)){
			
			printf("Q1\n");
			
			
		}
		if ((x < 0) && (y > 0)){
			
			printf("Q2\n");
			
			
		}
		if ((x < 0) && (y < 0)){
			
			printf("Q3\n");
			
			
		}
		if ((x > 0) && (y < 0)){
			
			printf("Q4\n");
			
			
		}
			
	
	
		
	}	
		
		
	
	
	return 0;
}
