int main(void)
{
  // Obtém as palavras dos jogadores
  string word1 = get_string("Player 1: ");
  string word2 = get_string("Player 2: ");

  // Calcula as pontuações
  int score1 = compute_score(word1);
  int score2 = compute_score(word2);

  // Determina o vencedor
  if (score1 > score2) {
    printf("Player 1 wins!\n");
  } else if (score2 > score1) {
    printf("Player 2 wins!\n");
  } else {
    printf("Tie!\n");
  }

  return 0;
}

int compute_score(string word)
{
  int score = 0;
  for (int i = 0, n = strlen(word); i < n; i++) {
    char c = word[i];
    if (isalpha(c)) {
      // Converte para maiúscula para usar o índice na tabela POINTS
      c = toupper(c);
      score += POINTS[c - 'A'];
    }
  }
  return score;
}
