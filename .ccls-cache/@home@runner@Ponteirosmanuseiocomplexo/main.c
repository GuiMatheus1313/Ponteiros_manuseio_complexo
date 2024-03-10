#include <stdio.h>



int main(void) {
  int a, b, *p1, *p2;

  a = 4;
  b = 3;
  printf("A: %d e B: %d\n", a, b);
  p1 = &a;
  printf("p1 = %p e &p1 = %p\n", p1, &p1);
  
  printf("p1 = %p e &p1 = %p\n", p1, &p1);

}