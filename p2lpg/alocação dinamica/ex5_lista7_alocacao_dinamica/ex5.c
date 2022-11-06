#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que realiza a união entre dois conjuntos de inteiros contidos nos vetores v1 e v2. A
função recebe os vetores e suas respectivas capacidades (n1 e n2) como parâmetros de entrada e
retorna o endereço do vetor alocado (contendo a união entre v1 e v2). Além disso, há um parâmetro
passado por referência (ponteiro p3), que serve para “retornar” a capacidade do vetor gerado. Faça o
programa principal invocando a função (a estrutura do programa é semelhante ao exemplo dado em aula
– intersecção). Protótipo da função:*/
int *uniao( int *v1, int n1, int *v2, int n2, int *p3 ){
	int i, q = 0, *v = NULL,j;
	v = realloc (v, sizeof(int)*(n1+n2));
	for (i = 0; i < n1; i++){
		v[q] = v1[i];
		q++;
	}
	for (i = 0; i < n2; i++){
		v[q] = v2[i];
		q++;
	}
	int aux;
	for (i = 0; i < q-1; i++){
		for (j = i+1; j < q; j++){
			if (v[j] < v[i]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
		
	}
	int k;
	for (i = 0; i < q; i++){
		for (j = i+1;j <q ;){
			if (v[j] == v[i]){
				for (k = j; k < q; k++){
					v[k] = v[k+1];
				}
				q--;
				}
				else{
					j++;
				}
			}
	
		}
		
	*p3 = q;
	
	v = realloc (v, sizeof(int)* q);
	
	return v;
}
void printar(int *v, int t){
	int i;
	for (i = 0; i < t; i++){
		printf("%i ", v[i]);
	}
	printf("\n");
}
int main(int argc, char *argv[]) {
	int *v1, *v2, *v3, n1, n2, n3;
	int i;
	printf("quantos termos no primeiro vetor? ");
	scanf("%i", &n1);
	v1 = (int *)malloc(sizeof(int)*n1);
	for (i = 0; i < n1;i++){
		printf("Digite o %io termo do vetor: ",i+1);
		scanf("%i", &v1[i]);
	}
	
	printf("quantos termos no segundo vetor? ");
	scanf("%i", &n2);
	v2 = (int *)malloc(sizeof(int)*n2);
	for(i = 0; i < n2; i++){
	
		printf("Digite o %io termo do vetor: ",i+1);
		scanf("%i", &v2[i]);
	}
	
	v3 = uniao(v1,n1,v2,n2,&n3);
	printar(v1,n1);
	printar(v2,n2);
	printar(v3,n3);
	return 0;
}
