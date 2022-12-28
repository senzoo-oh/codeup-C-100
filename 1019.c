#include <stdio.h>

int main(void){
  int yyyy;
  int mm;
  int dd;
  scanf("%04d.%02d.%02d",&yyyy,&mm,&dd);
  printf("%04d.%02d.%02d\n",yyyy,mm,dd);
  return 0;
}