#include <stdio.h>

int main(void){
  int number;
  scanf("%d", &number);
  for (int i = 1; i <= number; i++){
    if (i == 3 || i == 6 || i == 9){
      printf("X ");
    }
    else {
      printf("%d ", i);
    }
  }
  return 0;
}