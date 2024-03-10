#include <stdio.h>



int main(void) {
  int a, b, *p1, *p2;

  a = 4;
  b = 3;
  printf("A: %d e B: %d\n", a, b);
  p1 = &a;
  printf("p1 = %p e &p1 = %p\n", p1, &p1);
  p2 = p1;
  printf("p1 = %p e &p1 = %p\n", p1, &p1);
  printf("p2 = %p e &p2 = %p\n\n", p2, &p2);

  printf("Resultado: %d\n", *p2 = *p1 + 3);
  printf("p1 = %d e &p1 = %p\n", *p1, &p1);
  printf("p2 = %d e &p2 = %p\n", *p2, &p2);
  printf("A: %d e B: %d\n\n\n", a, b);

  b = b*(*p1);
  printf("A: %d e B: %d\n", a, b);
  printf("*p2++ = %d \n\n\n\n", a); //PERGUNTAR PARA O PROFESSOR PRÓXIMA AULA sobre o ++ e não mudar o número

  p1 = &b;
  printf("%d %d\n", *p1, *p2);
  printf("%d %d\n", a, b);

  


}