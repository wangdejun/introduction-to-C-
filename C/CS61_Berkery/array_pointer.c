#include <stdio.h>

int foo(int array[], unsigned int size){
  printf("%d\n", sizeof(array));
}

int main(void){
  int a[10], b[5];
  foo(a,10);
  foo(b,5);
  printf("%d\n",sizeof(a));
}
