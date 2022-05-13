// Program to Concatenate Two Strings

#include <stdio.h>
#define pragha_sizeof(x) (char*)(&x+1) - (char*)(&x)


int main(void) {
  int a = 0;
  printf("%d",pragha_sizeof(a));
  return 0;
}
