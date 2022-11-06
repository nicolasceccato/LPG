#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float A1, B1, C1, A2, B2, C2;
	
	printf("Digite 3 lados de um triangulo: ");
	scanf("%f %f %f", &A1, &B1, &C1);
	while (A1 <= 0){
		
		printf("valor invalido para o primeiro valor. digite um numero maior que zero:\n ");
		scanf("%f", &A1);
		
	}
	while (B1 <= 0){
		
		printf("valor invalido para o segundo valor. digite um numero maior que zero:\n ");
		scanf("%f", &B1);
		
	}
	while (C1 <= 0){
		
		printf("valor invalido para o terceiro valor. digite um numero maior que zero:\n ");
		scanf("%f", &C1);
}
	
	if ((A1 > B1) && (A1 > C1) ){
		
		A2 = A1;
		
		if (B1 > C1){
			
			B2 = B1;
			C2 = C1;	
		}
		else{
			
			B2 = C1;
			C2 = B1;
		}
	}
	if ((B1 > A1) && (B1 > C1)){
		
		A2 = B1;
		
		if (A1 > C1){
		
			B2 = A1;
			C2 = C1;
					
		}
		else {
		
			B2 = C1;	
			C2 = A1;
		}
		
	}
	if ((C1 > A1) && (C1 > B1)){
		
		A2 = C1;
		
		if (A1 > B1){
			
			B2 = A1;
			C2 = B1;
		}
		else{
			B2 = B1;
			C2 = A1;
			
		} 
		
	}
	if ((A1 == B1) && (A1 == C1)){
		
		A2 = A1;
		B2 = B1;
		C2 = C1;
	}
	if ((A1 == B1) && (A1 > C1)){
		
		A2 = A1;
		B2 = B1;
		C2 = C1;
		
	}
	if ((A1 == B1) && (A1 < C1)){
		
		A2 = C1;
		B2 = B1;
		C2 = A1;
	}
	if ((A1 == C1) && (A1 > B1)){
		
		A2 = A1;
		B2 = C1;
		C2 = B1;
		
	}
	if ((A1 == C1) && (A1 < B1)){
		
		A2 = B1;
		B2 = A1;
		C2 = C1;
		
	}
	if ((B1 == C1) && (A1 > B1)){
		
		A2 = A1;
		B2 = B1;
		C2 = C1;
		
	}
	if ((B1 == C1) && (A1 < B1)){
		
		A2 = C1;
		B2 = B1;
		C2 = A1;
		
	}
	
	
	printf ("%.1f %.1f %.1f ", A2, B2, C2);
	
	if (A2 >= B2 + C2){
		
		printf(" NAO FORMA TRIANGULO\n");
	}
	else{
		
		if ((A2*A2) == (B2*B2 + C2*C2)){
		
		printf("TRIANGULO RETANGULO\n");
		
	}	
		
		
		if ((A2*A2) > (B2*B2 + C2*C2)){
			
			printf("TRIANGULO OBTUSANGULO\n");
			
	}	
		if ((A2*A2) < (B2*B2 + C2*C2)){
			
			printf ("TRIANGULO ACUTANGULO\n");
			} 
		
	
		if ((A2 == B2) && (A2 == C2)){
		
			printf("TRIANGULO EQUILATERO\n");
			}
			
		
		if (((A2 == B2) && (A2 != C2)) || ((A2 == C2) && (A2 != B2)) || ((B2 == C2) && (B2 != A2))) {
			
			printf("TRIANGULO ISOSCELES\n");
			
			}
		
			
	}
	
	

	
	return 0;
}
