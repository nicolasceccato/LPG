#include <stdio.h>
#include <stdlib.h>

/* Faça uma função que calcula o perímetro e a área de um círculo, dado o raio.
void calcula_circulo(float raio, float *pPerimetro, float *pArea); */
void calcula_circulo(float raio, float *pPerimetro, float *pArea){
	*pPerimetro = 2*raio*3.1415;
	*pArea = 3.1415*raio*raio;
	
}
int main(int argc, char *argv[]) {
	float r, p , a;
	
	scanf("%f", &r);
	
	calcula_circulo(r,&p,&a);
	
	printf("perimetro = %f\narea = %f\n", p, a);
	return 0;
}
