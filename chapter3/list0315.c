/* 二つの整数の差を表示するプログラム。 */

#include<stdio.h>
int main(void)
{
  int n1,n2,gap;

  puts("二つの整数を入力してください。");
  printf("整数１："); scanf("%d",&n1);
  printf("整数２："); scanf("%d",&n2);

  gap = (n1 > n2) ? n1 - n2 : n2 - n1;

  printf("それらの差は%dです。\n",gap);

  return 0;
}
