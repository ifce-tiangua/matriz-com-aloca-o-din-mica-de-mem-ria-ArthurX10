#include<stdio.h>
#include<stdlib.h>


int main(){
  int i, j;
  int linha, coluna;
  int **mat;
  
  
  mat = (int**)malloc(linha * sizeof(int*));

  scanf("%d", &linha);
  scanf("%d", &coluna);
  
  for(i=0; i<linha;i++){
    mat[i] = (int*)malloc(coluna*sizeof(int*));
  }

  for(i=0; i<linha; i++){
    for(j=0; j<coluna; j++){
      scanf("%d", &mat[i][j]);
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
  return 0;
}
