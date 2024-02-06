#include <stdio.h>

int main(void) {
  int tamanho_inicial, tamanho_final, anos = 0;

  // Solicitar o tamanho inicial da população
  do {
    printf("Digite o tamanho inicial da população (mínimo 9): ");
    scanf("%d", &tamanho_inicial);
  } while (tamanho_inicial < 9);

  // Solicitar o tamanho final da população
  do {
    printf("Digite o tamanho final da população (maior ou igual ao tamanho inicial): ");
    scanf("%d", &tamanho_final);
  } while (tamanho_final < tamanho_inicial);

  // Calcular o número de anos
  while (tamanho_inicial < tamanho_final) {
    anos++;
    tamanho_inicial += tamanho_inicial / 3 - tamanho_inicial / 4;
  }

  // Imprimir o número de anos
  printf("Anos: %d\n", anos);

  return 0;
}
