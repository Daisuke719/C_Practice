#include<stdio.h>
int min3(int a,int b,int c)
{
  int min = a;

  if(min > b)
    min = b;
  if(min > c)
    min = c;

  return min;
}

int main(void)
{
  int na,nb,nc;


  puts("三つの整数を入力してください。");
  printf("整数a："); scanf("%d",&na);
  printf("整数b："); scanf("%d",&nb);
  printf("整数c："); scanf("%d",&nc);

  printf("最小の値は%dです。",min3(na,nb,nc));

  return 0;
}
