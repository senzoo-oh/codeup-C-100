#include <stdio.h>

int main(void){
  int year, month, day;
  scanf("%d.%d.%d",&year,&month,&day);
  printf("%02d-%02d-%d\n",day,month,year);
  return 0;
}