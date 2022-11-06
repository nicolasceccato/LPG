#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float fatorial (int n){
	if ((n == 1)){
		return 1;
	}else{
		return n*fatorial(n-1);
	}
}
float eh_primo(int n){
	float soma = 0, i;
	
	if (n == 0){
		return 1;
	}else{
		return 1.0/fatorial(n) + eh_primo(n-1);
	}
	
	
		
}
	

	
int main(int argc, char *argv[]) {
	float n;
	
	printf("digite n: \n");
	
	scanf("%f",&n);
	
	printf("a soma eh: %f\n", eh_primo(n));
		
	
	
	return 0;
}
