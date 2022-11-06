#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int maior_valor (int x, int y, int z){
	if ((x >= y) && (x >= z)){
		return x;
	}
	else{
		if ((y >= x) && (y >= z)){
			return y;
		}
		else{
			return z;
		}
	}
}
int main(int argc, char *argv[]) {
	int a, b, c;
	printf ("digite tres valores: ");
	scanf("%i%i%i", &a, &b, &c);
	
	printf("o maior valor entre os digitados eh: %i\n", maior_valor(a, b, c));
	
	return 0;
}
