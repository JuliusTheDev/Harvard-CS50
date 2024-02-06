#include <stdio.h>

int main() {
  int troco, moedas = 0;
  int moedas_disponiveis[] = {25, 10, 5, 1};

  // Pegar o valor do troco do usuário
  printf("Digite o valor do troco (em centavos): ");
  scanf("%d", &troco);

  // Loop para iterar sobre as moedas disponíveis
  for (int i = 0; i < 4; i++) {
    // Encontrar o número máximo de moedas da denominação atual que podem ser usadas
    int num_moedas = troco / moedas_disponiveis[i];
    troco -= num_moedas * moedas_disponiveis[i];
    moedas += num_moedas;

    // Mostrar o número de moedas usadas
    if (num_moedas > 0) {
      printf("%d moedas de %d centavos\n", num_moedas, moedas_disponiveis[i]);
    }
  }

  // Mostrar o número total de moedas
  printf("Total de moedas: %d\n", moedas);

  return 0;
}
