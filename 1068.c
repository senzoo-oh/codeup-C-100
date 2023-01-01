#include <stdio.h>

int main(void){
  unsigned score;
  scanf("%d", &score);
  if (score >= 90){
    printf("A\n");
  }
  else if (score >= 70){
    printf("B\n");
  }
  else if (score >= 40){
    printf("C\n");
  }
  else {
    printf("D\n");
  }
  return 0;
}