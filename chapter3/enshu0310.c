#include<stdio.h>
int main(void)
{
  int na,nb,nc;

  puts("三つの整数値を入力してください。");
  printf("整数A："); scanf("%d",&na);
  printf("整数B："); scanf("%d",&nb);
  printf("整数C："); scanf("%d",&nc);

  if(na == nb && nb == nc)
    printf("三つの値は等しいです。\n");
  else if(na == nb || na == nc || nb == nc)
    printf("二つの値は等しいです。\n");
  else
    printf("三つの値は異なります。\n");

  return 0;
}
