#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int soma_especial(int n, int k, int x);

int main(int argc, char *argv[]) {

int numero_de_termos, multiplos_dele, a_partir_deste;

printf ("digite o numero de termos: ");
scanf("%i", &numero_de_termos);

printf ("digite o numero no qual sera multiplo: ");
scanf("%i", &multiplos_dele);

printf ("digite o numero a partir de qual serao gerados os multiplos: ");
scanf("%i", &a_partir_deste);

int resultado = soma_especial(numero_de_termos, multiplos_dele, a_partir_deste);

printf ("a soma dos %i termos que sao multiplos de %i a partir de %i eh: %i\n",numero_de_termos, multiplos_dele, a_partir_deste, resultado);
	
	return 0;
}

int soma_especial(int n, int k, int x){
	int i, cont = 0, soma = 0;
	
	for (i = x; cont < n; i++)
		
		if (i % k == 0){
			cont++;
			soma = soma + i;
		}
		return soma;
}

