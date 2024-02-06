#include <stdio.h>

int main() {
    int altura;
    int i, j;

    // Solicita a altura da pirâmide ao usuário.
    printf("Tamanho: ");
    scanf(" %d ", &altura);

    // Verifica se a altura é válida.
    if (altura < 1 || altura > 8) {
        printf("Tamanho inválido.\n");
        return 1;
    }

    // Imprime a pirâmide.
    for (i = 0; i < altura; i++) {
        for (j = 0; j < altura - i - 1; j++) {
            printf("   ");
        }
        for (j = 0; j < i + 1; j++) {
            printf("#  ");
        }
        printf("\n");
    }

    return 0;
}