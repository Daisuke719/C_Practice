#include<stdio.h>
int main(void)
{
  int n1,n2,n3,n4;
  printf("三つの整数を入力してください。\n");
  printf("整数１："); scanf("%d",&n1);
  printf("整数２："); scanf("%d",&n2);
  printf("整数３："); scanf("%d",&n3);

  n4 = n1+n2+n3;

  printf("それらの和は%dです。\n",n4);

  return 0;
}
