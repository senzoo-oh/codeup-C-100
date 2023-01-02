#include <stdio.h>

int main(void){
  char alphabet;
  while (alphabet != 'q'){
    scanf("%c", &alphabet);
    printf("%c", alphabet);
    printf("\n");
  }
  return 0;
}