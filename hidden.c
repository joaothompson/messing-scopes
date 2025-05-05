
#include <stdio.h>

#include "hidden.h"

//variavel global
extern int total;

void print_total_value(void)
{
  printf("Total:\u2001%d.\n", total);
  return;
}

void increment_total_value(void)
{
  total++;
  return;
}


void read_total_value(void)
{
  scanf("%d", &total);
  return;
}

void reset_total_value(void)
{
  total = 0;
  return;
}

void get_total_value(int *out)
{
  (*out) = total;
  return;
}


