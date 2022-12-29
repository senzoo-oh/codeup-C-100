#include <stdio.h>

int main(void){
  unsigned a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", a + b );
  printf("%d\n", a - b );
  printf("%d\n", a * b );
  printf("%d\n", a / b );
  printf("%d\n", a % b );
  printf("%.2f\n", (float)a / b ); 
  // int 보다 float의 자료형이 더 등급이 높기 때문에 결과 값은 float이 된다.
  return 0;
}