#include <stdio.h>

int busca(int vetor[], int inicio, int fim, int valor) {
    if (inicio >= fim) {
        return -1;
    }
    if (vetor[inicio] == valor) {
        return inicio;
    } else {
        return busca(vetor, inicio + 1, fim, valor);
    }
}

int main() {
    int array[4] = {3, 12, 1, 18};
    int comeco, numero, total;
    total = 4;
    comeco = 0;

    printf("os valores da array sao: 3, 12, 1, 18 \n");
    printf("qual deseja procurar? \n");
    scanf("%i", &numero);

    int posicao = busca(array, comeco, total, numero);
    if (posicao == -1) {
        printf("O numero nao existe \n");
    } else {
        printf("numero encontrado na posicao %i\n", posicao + 1);
    }
    return 0;
}
