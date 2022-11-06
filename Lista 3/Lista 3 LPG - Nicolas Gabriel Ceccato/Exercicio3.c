#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int eh_digito (char x){

	
	if ((x >= '0') && (x <= '9')){
		return 1;
	}
	else{
		return 0;
	}
}	
int main(int argc, char *argv[]) {
	char a;
	
	printf("digite um caractere: ");
	scanf(" %c", &a);
	
	int n;
	
	if (eh_digito(a) == 1){
		n = a - 0;	
		printf ("o caractere digitado representa o valor %i\n", n);
	}
	else{
		printf("o caractere digitado nao representa um digito de 0 a 9\n");
	}
	return 0;
}
