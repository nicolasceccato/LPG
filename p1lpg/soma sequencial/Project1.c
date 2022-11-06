#include <stdio.h>
#include <stdlib.h>


int soma (int x){
	if (x == 1){
		return 1;
		
	}else{
		return x + soma (x-1);
	}
}
int main(){
	int n;
	scanf("%i", &n);
	printf("A soma eh : %i", soma(n));
}
