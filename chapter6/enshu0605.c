#include<stdio.h>

int sumup(int na)
{
  int i;
  int tmp = 0;

  for(i = 1; i <= na; i++)
    tmp += i;

  return tmp;
}




int main(void)
{
  int n;

  printf("整数を入力してください：");
  scanf("%d",&n);

  printf("1から%dまでの全整数の和は%dです。\n",n,sumup(n));

  return 0;
}
