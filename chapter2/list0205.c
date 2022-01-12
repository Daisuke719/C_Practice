#include<stdio.h>
int main(void)
{
  int na,nb;

  puts("二つの整数を入力してください。");

  printf("整数a:"); scanf("%d",&na);
  printf("整数b:"); scanf("%d",&nb);

  printf("それらの平均は%dです。\n",(na+nb)/2);

  return 0;
}
