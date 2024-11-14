#include <stdio.h>
#include <stdlib.h>

int main() {
    int linha = 0, coluna = 0;
    int i, j;
    int **m;
    
    scanf("%d", &linha);
    scanf("%d", &coluna);

 
    m = (int **)malloc(linha * sizeof(int *));
    if (m == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    
    for (i = 0; i < linha; i++) {
        m[i] = (int *)malloc(coluna * sizeof(int));
        if (m[i] == NULL) {
            printf("Erro ao alocar memória.\n");
            return 1;
        }
    }
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    
    for (i = 0; i < linha; i++) {
        free(m[i]);
    }