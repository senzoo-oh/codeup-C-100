#include <stdio.h>

int main(void){
  int variable_name;
  scanf("%X", &variable_name);

  for (int i = 1; i <= 15; i++){
    int result = variable_name * i;
    printf("%X*%X=%X\n", variable_name, i, result);
  }
}