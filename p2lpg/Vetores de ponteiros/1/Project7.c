#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char **nomes;
	int q,i,t;
	
	printf("Quantos nomes deseja digitar?");
	scanf("%d",&q);
	
	nomes =(char **)malloc(sizeof(char *)*q);
	
	for(i=0;i<q;i++){
		nomes[i]=(char *)malloc(sizeof(char));
		printf("Digite o  nome %d:",i);
		scanf("%s",nomes[i]);
	}

	printf("\n");
	for(i=0;i<q;i++){
		printf("%s ",nomes[i]);
	}

	return 0;
}

