#include<stdio.h>
int main(void)
{
  int no;

  printf("正の整数を入力してください：");
  scanf("%d",&no);

  while(no > 0){
    printf("%d ",no);

    no--;
  }

  if(no == 0)
    printf("0\n");

  return 0;
}
