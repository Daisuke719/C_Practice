#include<stdio.h>

#define max(x,y)  (((x) > (y)) ? (x) : (y))

int main(void)
{
  int a,b,c,d;

  puts("四つの整数を入力してください。");
  printf("a："); scanf("%d",&a);
  printf("b："); scanf("%d",&b);
  printf("c："); scanf("%d",&c);
  printf("d："); scanf("%d",&d);

  printf("最も大きい値は%dです。\n",max(max(max(a,b),c),d));

  return 0;
}
