#include <stdio.h>

int main(void){
  int num;
  int total = 0;
  scanf("%d", &num);
  for (int i = 1; i <= num; i++){
    if (i%2 == 0){
      total += i;
    }
    }
  printf("%d\n", total);
  return 0;
}