#include <stdio.h>

int main(){
  int *x;
  *x = 77;
  printf("------\n");
  printf("*x:%d\n&x:%p\n",*x, x);
  printf("------\n");
  return 0;
}
