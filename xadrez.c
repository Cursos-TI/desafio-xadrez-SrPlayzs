#include <stdio.h>

void moverTorre() {
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
}

void moverBispo() {
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e direita):\n");
    int i = 0;
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }
}

void moverRainha() {
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);
}

int main() {
    moverTorre();
    moverBispo();
    moverRainha();
    return 0;
}