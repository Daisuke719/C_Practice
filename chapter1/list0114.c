/*　読み込んだ二つの整数値の和を変数に格納して表示　*/
#include<stdio.h>
int main(void)
{
  int n1,n2,wa;

  puts("二つの整数値を入力してください。") ;

  printf("整数１："); scanf("%d",&n1);
  printf("整数２："); scanf("%d",&n2);

  wa=n1+n2;

    printf("それらの和は%dです。\n",wa);

  return 0;
}
