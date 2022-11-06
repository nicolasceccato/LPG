#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int compara(char str[], int n);
int main(int argc, char *argv[]) {
	
	char str1[50];
	
	printf("Digite uma palavra: ");
	scanf(" %s", str1);
	
	int i;
	
	for(i = 0; str1[i] != '\0'; i++);
	
	int n = i;
	
	if (compara(str1, n)){
		printf("\na string forma um palindrono\n");
	}else{
		printf("\na string NAO forma um palindrono\n");
	}	
	
	
	return 0;
}
	
int compara(char str[], int n){
	int i;
	for(i = 0; i < n; i++){
		if(str[i] != str[n-i-1])
		return 0;
	}
	return 1;
	
	
}	
	
