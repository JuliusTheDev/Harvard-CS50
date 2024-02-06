#include <stdio.h>

int main() {
  // Declarar variáveis
  long long int numero_cartao;
  int soma_pares = 0, soma_impares = 0, digito_atual;

  // Ler o número do cartão do usuário
  printf("Digite o número do seu cartão de crédito: ");
  scanf("%lld", &numero_cartao);

  // Loop para iterar sobre os dígitos do cartão
  while (numero_cartao > 0) {
    // Extrair o dígito atual
    digito_atual = numero_cartao % 10;

    // Se o dígito for par, multiplicá-lo por 2 e adicionar à soma de pares
    if (digito_atual % 2 == 0) {
      soma_pares += digito_atual * 2;
    } else {
      // Se o dígito for ímpar, adicioná-lo à soma de ímpares
      soma_impares += digito_atual;
    }

    // Dividir o número do cartão por 10 para remover o dígito atual
    numero_cartao /= 10;
  }

  // Calcular a soma total
  int soma_total = soma_pares + soma_impares;

  // Verificar se o último dígito da soma total é 0
  if (soma_total % 10 == 0) {
    printf("O número do cartão de crédito é válido!\n");
  } else {
    printf("O número do cartão de crédito é inválido.\n");
  }

  return 0;
}
