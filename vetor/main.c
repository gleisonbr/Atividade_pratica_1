#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int dados[12];
    int intervalo[2];
    float percentual;
    int i,j,k=0;
    int aux=0;

    printf("Digite os 12 valores \n");

    for(i = 0;i<12;i++){
      printf("Valor %i :",i+1);
      scanf("%i",&dados[i]);
    };

    printf("Digite os Intervalos de valores \n");

    for(j = 0;j<2;j++){
      printf("Digite o intervalo %i :",j);
      scanf("%i",&intervalo[j]);
    };

    for(k = 0;k<12;k++){
        if(dados[k] >= intervalo[0] &&  dados[k] <=intervalo[1]){
            ++aux;
        };
    };

    percentual = (float)aux/12*100;
    printf("O percentual encontrada foi: %.2f %% \n",percentual);

    return 0;
}
