#include <stdio.h>
#include "haste.h"

int main(void) {
  int precos[] = {
    1,5,8,9,10,17,17,20,24,30
  };

  int tamanhoHaste = 5;
  
  // scanf("%d", &tamanhoHaste);
  int solucao = problemaHaste(&precos, tamanhoHaste);
  printf("%d", solucao);
  return 0;
}