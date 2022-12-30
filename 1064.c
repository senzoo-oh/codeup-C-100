#include <stdio.h>
// 가장 작은 값을 출력하는 프로그램..

// int main(void){
//   int a, b, c;
//   scanf("%d %d %d", &a, &b, &c);
//   int x, y;
//   x = (a > b)?b:a;
//   y = (x > c)?c:x;
//   printf("%d\n", y);
//   return 0;
// }

int main(void){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%d\n", (((a>b)?b:a)>c)?c:((a>b)?b:a));
  return 0;
}