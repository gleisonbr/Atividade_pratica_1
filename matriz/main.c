#include<stdio.h>
#include<stdlib.h>

int main(){
  int i_linha;
  int i_coluna,aux;
  int mt_data[5][5]={
    {1,2,3,4,5},{1,2,3,4,5},
    {1,2,3,4,5},{1,2,3,4,5},
    {1,2,3,4,5}
  };

  for(i_linha=0;i_linha<5;i_linha++){
   mt_data[i_linha][4 - i_linha]=0;
   
   for(i_coluna=0;i_coluna<5;i_coluna++){
     printf("%i\t",mt_data[i_linha][i_coluna]);
   }
   printf("\n");
  }
  // l c  l c   l c   l c   l c
  // 0 5, 1 4 , 2 3 , 3 2 , 4 1
  return 0;
}