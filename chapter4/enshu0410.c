#include<stdio.h>
int main(void)
{
  int no,i;

  printf("正の整数：");
  scanf("%d",&no);

  i = 0;
  
  if(no > 0){
  while(no > i){
    i++;
    printf("*\n");
  }
 }
  return 0;
}
