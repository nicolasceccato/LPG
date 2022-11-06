#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void primos_a_partir (int k, int n){
	int i, soma_primo = 0;
	for (i = k; soma_primo < n; i++){
		int j, divisores = 0;
		for (j = 1; j <= i; j++){
			if (i % j == 0){
				divisores++;
			}
			
			}
		if (divisores == 2){
			soma_primo++;
			printf ("%i : %i\n", soma_primo, i);
	}
	
	
}
return;		
}
int main(int argc, char *argv[]) {
	int m, l;
	
	do{
	
	printf ("Digite a partir de qual numero deseja calcular os numeros primos : ");
	scanf("%i", &l);
	
	
	}while(l < 0);
	
	do{
	
	printf ("Digite a quantidade de primos que deseja : ");
	scanf("%i", &m);
	
	
	}while(m < 1);
	
	primos_a_partir (l, m);
	
	return 0;
	
	
}
