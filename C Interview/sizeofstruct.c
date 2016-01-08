#include <stdio.h>

struct XXX
{
  int x;
  float y;
  char z;
};

int main()
{
  struct XXX *ptr=(struct XXX *)0;
  ptr++;
  printf("Size of structure is: %d",*ptr);
  return 0;
}
