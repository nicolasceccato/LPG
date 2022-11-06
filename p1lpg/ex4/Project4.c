#include <stdio.h>
#include <stdlib.h>
#define MAX 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int vetores_iguais(float a[], float b[], int n);
int main(int argc, char *argv[]) {
	int i, a[MAX], b[MAX];
	for (i = 0; i < MAX; i++ ){
		printf("a[%i]\n", i+1);
		scanf("%i", &a[i]);
		printf("b[%i]\n", i+1);
		scanf("%i", &b[i]);
	}
	
	if(vetores_iguais(a,b,MAX)){
		printf("os vetores sao iguais\n");
	}else{
		printf("vetores diferentes\n");
	}
	
	return 0;
}
int vetores_iguais(float a[], float b[], int n){
	int i;
	for (i = 0; i < n; i++){
		if(a[i] != b[i]){
			return 0;
		}
	}
	return 1;
}
