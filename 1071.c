#include <stdio.h>

int main(void){
  int num;

A:
  scanf("%d", &num);
  if (num != 0){
    printf("%d\n", num);
    goto A;
  }
  else {
    goto B;
  }
B:
  return 0;
}
