#include <stdio.h>

void moverTorreRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorreRecursivo(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverRainhaRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1);
}

void moverCavaloAvancado() {
    printf("\nMovimento do Cavalo (2 casas para cima e 1 para a direita):\n");
    for (int i = 0, j = 0; i < 2 || j < 1; ) {
        if (i < 2) {
            printf("Cima\n");
            i++;
            continue;
        }
        if (j < 1) {
            printf("Direita\n");
            j++;
        }
    }
}

int main() {
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorreRecursivo(5);

    printf("\nMovimento do Bispo (5 casas na diagonal para cima e direita):\n");
    moverBispoRecursivo(5);

    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainhaRecursivo(8);

    moverCavaloAvancado();
    return 0;
}