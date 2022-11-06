#include <stdio.h>
#include <stdlib.h>

/* Escreva uma fun��o que realiza a uni�o entre dois conjuntos de inteiros contidos nos vetores v1 e v2. A
fun��o recebe os vetores e suas respectivas capacidades (n1 e n2) como par�metros de entrada e
retorna o endere�o do vetor alocado (contendo a uni�o entre v1 e v2). Al�m disso, h� um par�metro
passado por refer�ncia (ponteiro p3), que serve para �retornar� a capacidade do vetor gerado. Fa�a o
programa principal invocando a fun��o (a estrutura do programa � semelhante ao exemplo dado em aula
� intersec��o). Prot�tipo da fun��o:
int *uniao( int *v1, int n1, int *v2, int n2, int *p3 ); */

int *uniao( int *v1, int n1, int *v2, int n2, int *p3 ){
	int i,j = 0, *v3 = NULL;
	v3 = realloc(v3, sizeof(int)*(n1+n2));
	
	for (i = 0; i < n1; i++){
		v3[j] = v1[i];
		j++;
	}
	for (i = 0; i < n2; i++){
		v3[j] = v2[i];
		j++;
	}
	// At� esse ponto coloquei todos os valores em v3. Necess�rio ainda ordenar e retirar os repetidos
	int aux; 
	for (i = 0; i < (n1+n2) - 1; i++){
		for (j = i + 1; j < (n1+n2); j++){
			if(v3[i] > v3[j]){
				aux = v3[i];
				v3[i] = v3[j];
				v3[j] = aux;
			}
		}
	}
	//V3 ordenado
	// testa o primeiro valor com todos os seguintes. Se forem iguais o tamanho vai diminuir. Se forem diferentes I fica parado e J percorre at� o final
	int tam = n1+n2;
	int k;
	for (i = 0; i < tam; i++){
		for (j = i+1; j < tam ;){
			if(v3[i] == v3[j]){
				for (k = j; k < tam; k++){
					v3[k] = v3[k+1];
				}
				tam--;
			}
			else{
				j++;
			}
		}
	}
	*p3 = tam;
	return v3;
}
int *aloca (int *v, int capacidade){
	int i, *vr;
	vr = (int *)malloc(sizeof(int)*capacidade);
	for (i = 0; i < capacidade; i++){
		printf("digite o %i termo do vetor ", i+1);
		scanf("%i", &vr[i]);
	}
	
	return vr;
}
void printa (int *v, int capacidade){

	int i;
	for (i = 0; i < capacidade; i++){
		printf("%i ", v[i]);
	}
	printf("\n");
}
int main(int argc, char *argv[]) {
	int *v1, *v2, *v3, i, n1, n2, n3;
	
	printf("quantos termos deseja no primeiro vetor: \n");
	scanf("%i", &n1);
	
	v1 = aloca(v1, n1);
	
	printf("quantos termos deseja no segundo vetor: \n");
	scanf("%i", &n2);
	
	v2 = aloca (v2, n2);

	v3 = uniao (v1, n1, v2, n2, &n3);
	
	printf("\nPrimeiro vetor\n");
	printa(v1, n1);
	
	printf("\nSegundo vetor\n");
	printa (v2, n2);
	
	printf("\nUniao dos vetores\n");
	printa (v3, n3);
	
	free(v1);
	free(v2);
	free(v3);
	return 0;
}
