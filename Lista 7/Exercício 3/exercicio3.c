#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que aloca dinamicamente um vetor do tipo float e realiza a entrada de dados. Em
seguida, o programa deve calcular a média dos valores do vetor e alocar dinamicamente um novo vetor
contendo somente os valores maiores ou iguais à media. O processo pode ser feito usando malloc(), ou
seja, fazendo a contagem, alocação e cópia dos valores. Outra alternativa consiste em usar realloc() para
ir aumentando o espaço alocado à medida que os valores vão sendo encontrados. */
float *aloca (float *v, int *qtd, float *media){
	float *v2, soma = 0;
	int i, n;
	printf("\nquantos elementos tera esse vetor?\n");
	scanf("%i", &n);
	*qtd = n;
	v2 = (float *)malloc(sizeof(float)*n);
	for (i = 0; i < n; i++){
		printf("Digite o %i termo do vetor: \n", i+1);
		scanf("%f", &v2[i]);
		soma += v2[i];
	}
	
	float m = soma /n;
	*media = m;
	
	
	return v2;
}

float *novo_vetor (float *v, float media, int n, int *qtd_novo_vetor){
	float *v2 = NULL;
	int i, j = 0;
	for (i = 0; i < n; i++){
		if (v[i] >= media){
			v2 = realloc (v2, sizeof(float) * (j+1));
			v2[j] = v[i];
			j++;
		}
	}
	*qtd_novo_vetor = j;
	return v2;
}
int main(int argc, char *argv[]) {
	int qtd, i, qtd_novo_vetor;
	float *v,  media, *nv;
	
	v = aloca(v, &qtd, &media);
	
	printf("\nElementos originais do vetor: \n");
	for (i = 0; i < qtd; i++){
		printf ("%.2f ", v[i]);
	}
	printf ("\nO numero de termos do vetor original eh igual a %i\n", qtd);
		
	printf("\nA media dos valores do vetor original eh igual a %.2f\n", media);
	
	nv = novo_vetor (v, media, qtd, &qtd_novo_vetor);
	
	printf("\nElementos do vetor formado por valores iguais ou maiores que a media do vetor original: \n");
	for(i = 0; i < qtd_novo_vetor; i++){
		printf("%.2f ", nv[i]);
	}
	free(v);
	free(nv);
	return 0;
}
