#include <stdio.h>

int main(void){
  int number;
  scanf("%d", &number);
  int sum;

  for (sum = 0; sum < number; number++) {
    sum += number;
    printf("%d\n", number);
  }
  return 0;
}