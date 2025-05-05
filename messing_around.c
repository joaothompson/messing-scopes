
#include <stdio.h>

#include "messing_around.h"
#include "hidden.h"

//variavel global
extern int total;

void print_global()
{
  printf("global total %d\n", total);
  return;
}

void increment_print(char * s, int * total)
{
  printf("%s total %d\n", s, ++(*total));
  return;
}

void messing_scope(void) {
  printf("Messing with scopes\n");
  printf("global total %d\n", total);
  int total = 200;
  printf("local total %d\n", total);
  {
  int total = 300;
  printf("block total %d\n", total);
  for(int total = 400; total < 405; total++)
  {
    printf("loop total %d\n", total);
  }
  printf("block total %d\n", total);

  }
  
  printf("local total %d\n", total);
  print_global();
  
  return;
}

void messing_hard(void)
{
  printf("\n\n\n");
  printf("Messing real hard.\n");
  increment_print("global incremented", &total);
  int total = 500;
  increment_print("local incremented", &total);
  {
  int total = 600;
  increment_print("block incremented", &total);
  for(int total = 700; total < 705; total++)
  {
    increment_print("loop incremented", &total);
  }
  increment_print("block incremented", &total);
  }
  increment_print("local incremented", &total);
  print_global();
  return;
}
