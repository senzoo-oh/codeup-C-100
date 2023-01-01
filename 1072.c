#include <stdio.h>

int main(void){
  int count, num;
  scanf("%d", &count);
      print:
    scanf("%d", &num);
    if (count-- != 0){
      printf("%d\n", num);
      goto print;
    }
    else {
      return 0;
    }
}