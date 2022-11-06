#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int tipo_triangulo(float x, float y, float z);


int main(int argc, char *argv[]) {
	
	float a, b, c;
	
	
	do{
		
		printf("Digite um valor maior que zero para ser a primeira dimensao do triangulo: ");
		scanf("%f", &a);
	
	}while (a <= 0);
	
	do{
		
		printf("Digite um valor maior que zero para ser a segunda dimensao do triangulo: ");
		scanf("%f", &b);
	
	}while (b <= 0);
	
	do{
		
		printf("Digite um valor maior que zero para ser a terceira dimensao do triangulo: ");
		scanf("%f", &c);
	
	}while (c <= 0);
	
	int t = tipo_triangulo (a, b, c);
	
	if (t == 1){
		printf("Nao forma triangulo\n");
	}
	if (t == 2){
		printf("Triangulo equilatero\n");
	}
	if (t == 3){
		printf("Triangulo isosceles\n");
	}
	if (t == 4){
		printf("Triangulo escaleno\n");
	}
	
	return 0;
}

int tipo_triangulo (float x, float y, float z){

	if (((x + y) <= z ) || ((x + z) <= y) || ((y + z) <= x) ){
		
		return 1;
		
	}
	else{
		
		if ((x == y) && (y == z)){
			
			return 2;
			
		}
		else{
			
			if ((x == y) || (x == z) || (y == z)){
	
				return 3;
		
			}
			//else{
				
				//return 4;
			//}
		}
	}
	return 4;	
}	
