#include <stdio.h>
#include <stdlib.h> // Para usar malloc e free

int main() {
    int linha = 0, coluna = 0;
    int i, j;
    int **m; // Ponteiro para ponteiro para armazenar a matriz dinamicamente

    // Solicita o tamanho da matriz
    
    scanf("%d", &linha);
    scanf("%d", &coluna);

    // Aloca memória para as linhas
    m = (int **)malloc(linha * sizeof(int *));
    if (m == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Aloca memória para cada coluna em cada linha
    for (i = 0; i < linha; i++) {
        m[i] = (int *)malloc(coluna * sizeof(int));
        if (m[i] == NULL) {
            printf("Erro ao alocar memória.\n");
            return 1;
        }
    }

    // Lê os valores da matriz
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    // Exibe a matriz
    
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n"); // Nova linha para cada linha da matriz
    }

    // Libera a memória alocada
    for (i = 0; i < linha; i++) {
        free(m[i]); // Libera cada linha
    }
    free(m); // Libera o ponteiro para as linhas

    return 0;
}
