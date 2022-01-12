/* 三つの整数値を読み込んでその最小値を表示するプログラム　*/

#include<stdio.h>
int main(void)
{
  int n1,n2,n3,min;

  puts("三つの整数を入力してください。");
  printf("整数１："); scanf("%d",&n1);
  printf("整数２："); scanf("%d",&n2);
  printf("整数３："); scanf("%d",&n3);

  if(n1 < n2)
    if(n1 < n3)
      min = n1;

    if(n2 < n1)
    if(n2 < n3)
      min = n2;

      if(n3 < n1)
	if(n3 < n2)
	  min = n3;

      printf("それらの最も小さい値は%dです。\n",min);
      
  return 0;
}
