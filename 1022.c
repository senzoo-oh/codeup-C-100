#include <stdio.h>

int main(void){
  char sentence[2001];
  fgets(sentence, 2000, stdin);   //배열에 저장할 때에는 &주소를 지정하지 않는다.
  printf("%s\n",sentence);
  return 0;
}