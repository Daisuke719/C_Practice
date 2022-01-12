/* 読み込んだ整数値は５で割り切れないか。 */

#include<stdio.h>
int main(void)
{
  int no;

  printf("整数を入力してください:");
  scanf("%d",&no);

  if(no % 5)
    puts("その数は５で割り切れません。");

  return 0;
}
