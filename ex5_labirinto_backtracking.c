#include <stdio.h>

int resolverLabirinto(char labirinto[][10], int linha, int coluna) {
    if (linha < 0 || linha >= 3 || coluna < 0 || coluna >= 4) {
        return 0;
    }
    if (labirinto[linha][coluna] == 'F') {
        return 1;
    }
    if (labirinto[linha][coluna] == '1' || labirinto[linha][coluna] == 'V') {
        return 0;
    }

    labirinto[linha][coluna] = 'V';

    if (resolverLabirinto(labirinto, linha - 1, coluna)) {
        return 1;
    }
    if (resolverLabirinto(labirinto, linha + 1, coluna)) {
        return 1;
    }
    if (resolverLabirinto(labirinto, linha, coluna - 1)) {
        return 1;
    }
    if (resolverLabirinto(labirinto, linha, coluna + 1)) {
        return 1;
    }

    return 0;
}

int main() {
    char labirinto[3][10] = {
        {'S', '0', '1', '0'},
        {'1', '0', '1', '0'},
        {'0', '0', '0', 'F'}
    };

    if (resolverLabirinto(labirinto, 0, 0)) {
        printf("Caminho encontrado!\n");
    } else {
        printf("Nao existe caminho ate a saida.\n");
    }
    return 0;
}
