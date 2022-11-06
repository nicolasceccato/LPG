#include <stdio.h>
#include <stdlib.h>
#define MAX 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void vetor_fibonacci(int v[], int n){
	int i;
	v[0] = 1;
	v[1] = 1;
	for (i = 2; i < n; i++){
		v[i] = v[i-1] + v[i -2];
	}
}
int main(int argc, char *argv[]) {
	int n = MAX;
	
	int v[n];
	
	vetor_fibonacci(v,n);
	
	int i;
	printf("v[%i] : ", n);
	for(i = 0; i < n; i++){
		printf("%i ", v[i]);
	}
	
	return 0;
}
