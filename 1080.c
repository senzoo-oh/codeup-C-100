#include <stdio.h>

// int main(void){
//   int number;
//   scanf("%d", &number);
//   int sum = 0;
//   int i;
//   for (i = 1; ; i++) {
//     sum += i;
//     if (sum >= number) break;
//   }
//   printf("%d\n", i);
//   return 0;
// }

int main(void){
  int number;
  scanf("%d", &number);
  int sum = 0;
  int i;
  for (i = 1; sum < number; i++) {
    sum += i;
  }
  printf("%d\n", i);
  return 0;
}

