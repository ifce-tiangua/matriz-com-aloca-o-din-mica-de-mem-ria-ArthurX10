#include <stdio.h>
#include <stdlib.h>

void imprimir_matriz(int **mat, int linha, int coluna) {
    if (linha == 0 || coluna == 0) {
        printf("matriz vazia");
        return;
    }


    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("%d", mat[i][j]);
            if (j < coluna - 1) {
                printf(" ");
            }
        }
        if (i < linha - 1) {
            printf(" "); 
        }
        printf("\n"); 
    }
   
}

int main() {
    int i, j, linha, coluna;
    int **mat;

    scanf("%d %d", &linha, &coluna);

    if (linha == 0 || coluna == 0) {
        printf("[matriz vazia]");
        return 0;
    }

    mat = (int**)malloc(linha * sizeof(int*));
    if (mat == NULL) return 1;

    for (i = 0; i < linha; i++) {
        mat[i] = (int*)malloc(coluna * sizeof(int));
        if (mat[i] == NULL) return 1;
    }

    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    imprimir_matriz(mat, linha, coluna);

    for (i = 0; i < linha; i++) {
        free(mat[i]);
    }
    free(mat);

    return 0;
}
