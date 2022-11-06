#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void calcula_circulo(float raio, float *pPerimetro, float *pArea){
	
	*pPerimetro = 2*3.1415926*raio;
	*pArea = 3.1415926*raio*raio;
	
}
int main(int argc, char *argv[]) {
	float p, a, r;
	
	printf("Digite o raio do circulo: ");
	scanf("%f", &r);
	
	calcula_circulo(r, &p, &a);
	
	printf("\no circulo de raio %.2f tem perimetro igual a %.2f e area igual a %.2f\n", r, p, a);
	
	return 0;
}
