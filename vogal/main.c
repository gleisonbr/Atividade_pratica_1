#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char frase[50]="Estamos na aula de algoritmos";
	printf("Texto - %s \n\n",frase);
	printf("Vogais: ");
	for(int i=0;i<strlen(frase);i++){
		int x = frase[i];
		if(x==97) printf("a ");
		if(x==101) printf("e ");
		if(x==105) printf("i ");
		if(x==111) printf("o ");
		if(x==117) printf("u ");
	}
	printf("\n");
	return 0;
}
