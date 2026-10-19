#include <stdio.h>

int SOMA(int vetor[], int t) {
    if (t <= 0) {
        return 0;
    }
    return vetor[t - 1] + SOMA(vetor, t - 1);
}

int main() {
    int n, result;
    printf("quantos termos dentro do vetor? \n");
    scanf("%i", &n);

    int teste[n];
    for (int i = 0; i < n; ++i) {
        printf("digite os termos de dentro do vetor \n");
        scanf("%i", &teste[i]);
    }

    printf("a soma dos componentes eh %i\n", SOMA(teste, n));
    return 0;
}
