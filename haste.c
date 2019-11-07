
#include "haste.h"

int problemaHaste(int (*preco)[], int tam){
  if(tam == 0)
    return 0;
  
  int lucroMax = 0;

  for(int i = 1; i < tam; i++){
    int temp = (*preco)[i] + problemaHaste(preco, tam - i -1);

    if(temp > lucroMax) lucroMax = temp;
  
  }
  
  return lucroMax;

}
