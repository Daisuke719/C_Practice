#include<stdio.h>
int main(void)
{
  int retry;

  do{
    int no;

    printf("整数を入力してください：");
    scanf("%d",&no);

    if(no == 0)
      printf("その数は０です。\n");
    else if(no > 0)
      printf("その数は正です。\n");
    else
      printf("その数は負です。\n");

    printf("まだ続けますか？<yes...0/no...9>：");
    scanf("%d",&retry);
    
  }while(retry == 0);

  return 0;
}
