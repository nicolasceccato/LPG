#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float fatorial (int n){
 
	if (n == 0){
		return 1;
	}else{
		return n*fatorial(n-1);
	}
}
float somatoria (int n){
	
	if (n == 0){
		return 1;
	}else{
		return 1.0/fatorial(n) + somatoria (n-1);
}
}
int main(int argc, char *argv[]) {
	int n;
	
	printf("digite o valor desejado: ");
	scanf("%i", &n);
	
	float t = somatoria(n);
	
	printf("\n%f\n", t);
	return 0;
}
