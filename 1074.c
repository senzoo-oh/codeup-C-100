#include <stdio.h>

// int main(void){
//   int num;
//   scanf("%d", &num);
//   while (num-- > 1){
//     printf("%d\n", num);
//   }
//   return 0;
// }

int main(void){
  int num;
  scanf("%d", &num);
  while (num > 0){
    printf("%d\n", num);
    num -= 1;
  }
}