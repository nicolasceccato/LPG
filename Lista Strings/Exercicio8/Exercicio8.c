#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int eh_data(char str[]);
int main(int argc, char *argv[]) {
	int dia, mes, ano;
	char str[50];
	
	printf("digite uma string em formato de data dd/mm/aaaa\n");
	scanf(" %s", str);
	
	if (eh_data (str)){
		dia = (str[0] * 10) + str[1] - 528;
		mes = (str[3] * 10) + str[4] - 528;
		ano = (str[6] * 1000) + (str[7] * 100) + (str[8] * 10) + (str[9] * 1) - 53328;
		printf("\na string eh a data %i/%i/%i\n", dia, mes, ano);
	}else{
		printf("\nnao eh uma data\n");
	}
	
	
	
	
	return 0;
}

int eh_data(char str[]){
	int i;
	for (i = 0; str[i] != '\0'; i++);
	int n = i - 1;
	
	if (n != 9){
		return 0;
	}else{
		if ((str[2] != '/') || (str[5] != '/') ){
			return 0;
		}else{
			for (i = 0; i < 2; i++){
				if ((str[i] < 48) || (str[i] > 57)){
					return 0;
				}
					
			}for (i = 3; i < 5; i++){
			 	if ((str[i] < 48) || (str[i] > 57)){
			 		return 0;
				}
			}for (i = 6; i < 10; i++){
				if ((str[i] < 48) || (str[i] > 57)){
			 		return 0;
				}	
			}
		}
	}return 1;
	
}
/*void transforma_dia (char str[]){
	int d, m , a;
	if (eh_data (str)){
		d = (str[0] * 10) + str[1] - 528;
		m = (str[3] * 10) + str[4] - 528;
		a = (str[6] * 1000) + (str[7] * 100) + (str[8] * 10) + (str[9] * 1) -53328;
		printf("\na string eh a data %i/%i/%i\n", d, m, a);
	}else{
		printf("\nnao eh uma data\n");
	}
	

}
*/
