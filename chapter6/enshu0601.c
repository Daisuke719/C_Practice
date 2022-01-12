#include<stdio.h>

int min2(int a,int b)
{
  int min;
  if(a > b)
    min = b;
  else
    min = a;

  return min;
}

int main(void)
{
  int na,nb;

  puts("二つの整数を入力してください。");
  printf("整数a："); scanf("%d",&na);
  printf("整数b："); scanf("%d",&nb);

  printf("小さい方の数は%dです。",min2(na,nb));

  return 0;
}
