#include<stdio.h>
#include<stdlib.h>


int main(){
    int **mat, linha, coluna, i, j;


    scanf("%d %d", &linha, &coluna);


    if(linha == 0 || coluna==0){
        printf("[matriz vazia]");return 0;
    }

    mat = (int**)malloc(linha*sizeof(int*));
        for(int i = 0; i< linha; i++){
            mat[i] = (int*)malloc(coluna *sizeof(int));
        }


       for(i = 0; i < linha; i++){
           for(j = 0; j< coluna; j++){
                scanf("%d", &mat[i][j]);
        }
        }

        for(i = 0; i < linha; i++){
           for(j = 0; j < coluna; j++){
                printf("%d ", mat[i][j]);
        }
        printf("\n");
        }

        for (i = 0; i < linha; i++) {
        free(mat[i]);
    }
    free(mat);
return 0;
}
