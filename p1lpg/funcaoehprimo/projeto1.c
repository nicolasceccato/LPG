#include <stdio.h>
#include <stdlib.h>

int eh_primo(int x){
	int i, cont =0;
	
	for (i = 1; i <= x; i++){
		if (x % i == 0){
			cont++;
		}
	}
	if (cont == 2){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int k, n;
	scanf("%i%i", &k, &n);
	int i, cont =0;
	
	for (i = k+1; cont <n; i++){
		if(eh_primo(i)){
			cont++;
			printf("\n%i primo : %i\n", cont, i);
			
		}
	}
	return 0;
}
