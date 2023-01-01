#include <stdio.h>

int main(void){
  int num;
  scanf("%d", &num);
  while (num >= 1){
    num -= 1;
    printf("%d\n", num);
  }
  return 0;
}