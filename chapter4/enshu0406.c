#include<stdio.h>
int main(void)
{
  int no,i;

  printf("正の整数を入力してください：");
  scanf("%d",&no);

  i = 2;

  while(no >= i){

    printf("%d ",i++);

    i++;
}
  
  printf("\n");

  return 0;
}
