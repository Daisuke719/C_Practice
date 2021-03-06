#include<stdio.h>


int gcd(int x, int y)
{
  if(x == y)
    return x;
  else if(x > y)
    return gcd(x-y,y);
  else 
    return gcd(y-x,x);
}


int main(void)
{
  int x,y;

  puts("二つの整数を入力してください。");
  printf("x："); scanf("%d",&x);
  printf("y："); scanf("%d",&y);

  printf("二つの整数の最大公約数は%dです。\n",gcd(x,y));

  return 0;
}
