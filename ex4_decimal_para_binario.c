#include <stdio.h>
#define TAMANHO 8

void decibinario(int numero, int result[], int cont) {
    if (cont < 0) {
        return;
    }
    if (numero % 2 == 0) {
        result[cont] = 0;
    } else {
        result[cont] = 1;
    }
    decibinario(numero / 2, result, cont - 1);
}

void print(int result[], int tador) {
    if (tador == TAMANHO) {
        return;
    } else {
        printf("%i", result[tador]);
        print(result, tador + 1);
    }
}

int main() {
    int n = 13;
    int con = TAMANHO - 1;
    int tado[TAMANHO];

    decibinario(n, tado, con);
    print(tado, 0);
    printf("\n");

    return 0;
}
