#include<stdio.h>

int sqr(int na)
{
  return na * na;
}


int pow4(int a)
{
  return a * a;
}

/*　上のreturnをa*aではなくて、sqr(a)*sqr(a)として、main関数内のpow4(sqr(x))を、pow4(x)としても良い。 */

int main(void)
{
  int x;

  puts("整数を入力してください。");
  printf("整数："); scanf("%d",&x);

  printf("その数の４乗は%dです。\n",pow4(sqr(x)));

  return 0;
}
