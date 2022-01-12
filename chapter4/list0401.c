/* 読み込んだ整数値が偶数か奇数かを判定する。（好きなだけ繰り返せる）*/

#include<stdio.h>
int main(void)
{
  int retry;
  do{
    int no;

    printf("整数を入力してください：");
    scanf("%d",&no);

    if(no % 2)
      printf("その数は奇数です。\n");
    else
      printf("その数は偶数です。\n");

    printf("もう一度？[yes...0/no...9]：");
    scanf("%d",&retry);

  }
  while(retry == 0);

  return 0;
}
