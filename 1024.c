#include <stdio.h>

int main(void){
  char word[21];
  scanf("%s",word);
  
  int i;
  while (word[i] != 0) {
    printf("\'%c\'\n",word[i]);
    i += 1;
  }
  return 0;
}