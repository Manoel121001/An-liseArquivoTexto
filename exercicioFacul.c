#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void){
	int numerosI = 0, num_l=0,num_totalC=0;
	char nome_arquivo[20];
	char pegatextoARQ;
	FILE*arq=NULL;

	scanf("%s",nome_arquivo);
	arq = fopen(nome_arquivo, "r");
	// Ve se tem erro no arquivo	
	if(arq!=NULL){
	//Vê se o texto do arquivo chegou ao fim
	   while((pegatextoARQ=fgetc(arq))!=EOF){
			if (pegatextoARQ!='\0' ){
				num_totalC++;				
			}
			if (isprint(pegatextoARQ)){
				numerosI++;
			}
			if(pegatextoARQ=='\n'){
				num_l++;
			}
			
			
		}
		fclose(arq);
		printf("%d %d %d",num_totalC,numerosI,num_l);
		
	}
	else
	printf("Erro no arquivo %s\n",nome_arquivo);
	

	return 0;
}
