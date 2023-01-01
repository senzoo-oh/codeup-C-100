#include <stdio.h>

int main(void){
  char num1 = 97;
  char num2;
  scanf("%c", &num2);
  while(num1 <= num2){
    printf("%c ", num1);
    num1 += 1;
  }
return 0;
}

// a = 97, z = 122
