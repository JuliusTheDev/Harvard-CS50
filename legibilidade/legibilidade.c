#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
  int chave, i;
  char c;

  // Verifica se o programa foi executado com um argumento
  if (argc != 2) {
    fprintf(stderr, "Erro: Informe a chave de rotação como argumento.\n");
    return 1;
  }

  // Converte o argumento da linha de comando de string para int
  chave = atoi(argv[1]);

  // Valida se a chave é um número
  if (chave <= 0 || chave >= 26) {
    fprintf(stderr, "Erro: A chave de rotação deve ser um número entre 1 e 25.\n");
    return 1;
  }

  // Solicita o texto simples ao usuário
  printf("Digite o texto simples: ");
  while ((c = getchar()) != '\n') {
    // Itera sobre cada caractere do texto simples
    if (isalpha(c)) {
      // Se for letra maiúscula, rotaciona e preserva capitalização
      if (isupper(c)) {
        c = ((c - 'A' + chave) % 26) + 'A';
      } else {
        // Se for letra minúscula, rotaciona e preserva capitalização
        c = ((c - 'a' + chave) % 26) + 'a';
      }
    }
    // Imprime o caractere
    putchar(c);
  }

  // Imprime uma nova linha
  putchar('\n');

  return 0;
}
