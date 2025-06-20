#include <stdio.h>
int main(){
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char coluna[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '10'};
    char tabuleiro[10][10];

    // Inicializa o tabuleiro com água
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = '0';
        }
    }

    // Adiciona navios horizontais

    for (int j = 5; j < 8; j++) { // navio de 3 posições na linha F
        tabuleiro[5][j] = '3';
    }

    // Adiciona navios verticais

    for (int i = 7; i < 10; i++) { // navio de 3 posições na coluna 9
        tabuleiro[i][8] = '3';
    }

    // Exibe o cabeçalho das colunas
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf(" %c ", coluna[j]);
    }
    printf("\n");

    // Exibe as linhas com o conteúdo do tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%c  ", linha[i]);
        for (int j = 0; j < 10; j++) {
            printf(" %c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}