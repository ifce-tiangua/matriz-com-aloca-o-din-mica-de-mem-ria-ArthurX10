#include <stdio.h>
#include <stdlib.h>

#define LINHA 20
#define COLUNA 20

int main() {
    int linha = LINHA, coluna = COLUNA, **mat, i, j;


    scanf("%d %d", &linha, &coluna);


    if (linha == 0 || coluna == 0) {
        printf("[matriz vazia]\n");
        return 0;
    }


    mat = (int**)malloc(linha * sizeof(int*));

    for (i = 0; i < linha; i++) {
        mat[i] = (int*)malloc(coluna * sizeof(int));
    }


    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            scanf("%d", &mat[i][j]);
        }
    }


    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            printf("%d", mat[i][j]);
            if (j < coluna - 1) {
                printf(" ");
            }
        }
        if (i < linha - 1) {
            printf("\n");
        }
    }


    for (i = 0; i < linha; i++) {
        free(mat[i]);
    }
    free(mat);

    return 0;
}
