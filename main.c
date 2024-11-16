#include<stdio.h>
#include<stdlib.h>


int main(){
  int i, j;
  int linha, coluna;
  int **mat;
  
  
  mat = (int**)malloc(linha * sizeof(int*));
   if(mat== NULL){
     printf("Erro ao alocar memoria");
     return 1;
   }
  scanf("%d", &linha);
  scanf("%d", &coluna);
  
  for(i=0; i<linha;i++){
   mat[i] =(int*)malloc(coluna*sizeof(int*));
    if(mat[i]==NULL){
      printf("Erro ao alocar memória");
      return 1;     
  }
  }

  for(i=0; i<linha; i++){
    for(j=0; j<coluna; j++){
      scanf("%d ", &mat[i][j]);
    }
  }

  for(i=0; i<linha; i++){
    for(j=0; j<coluna; j++){
      printf("%d", mat[i][j]); 
    }
    printf("\n");
  }

  for (i = 0; i < linha; i++) {
      free(mat[i]);
  }
free(mat);
  return 0;
}
