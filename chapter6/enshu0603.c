#include<stdio.h>

int cube(int x)
{
  return x * x * x;
}

int main(void)
{
  int nx;

  puts("整数を入力してください。");
  printf("整数："); scanf("%d",&nx);

  printf("その数の３乗値は%dです。\n",cube(nx));

  return 0;			
}
