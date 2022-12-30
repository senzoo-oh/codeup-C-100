#include <stdio.h>

int main(void){
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", !(a ^ b));  //같으면 1, 다르면 0 = XNOR
  return 0; 
}