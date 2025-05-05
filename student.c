
#include <stdio.h>

#include "student.h"
#include "hidden.h"

void donottangleup(void)
{
  //Use read_total_value reset_total_value get_total_value increment_total_value para ler dois valores e realizar a soma dos dois valores.
  //O resultado da soma deve estar na variavel global total, porem esta funcao nao tem acesso direto a ela. Boa sorte.
  
  read_total_value();
  increment_total_value();

  return;
}
