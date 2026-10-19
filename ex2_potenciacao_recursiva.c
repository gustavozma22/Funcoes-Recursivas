#include <stdio.h>

int pot(int base, int exp) {
    if (base == 0) {
        return 0;
    }
    if (exp == 0) {
        return 1;
    }
    return (base) * pot(base, exp - 1);
}

int main() {
    int b, elev;
    printf("base da potencia? \n");
    scanf("%i", &b);
    printf("expoente da potencia? \n");
    scanf("%i", &elev);
    printf("a pot eh %i\n", pot(b, elev));
    return 0;
}
