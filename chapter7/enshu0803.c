#include<stdio.h>

#define swap(type,x,y) {type z; z = x; x = y; y = z;}  

int main(void)
{
  int    a,b;
  double c,d;

  puts("二つの整数を入力してください。");
  printf("a："); scanf("%d",&a);
  printf("b："); scanf("%d",&b);

  puts("二つの実数を入力してください。");
  printf("c："); scanf("%lf",&c);
  printf("d："); scanf("%lf",&d);

  swap(int,a,b);
  swap(double,c,d);

  printf("aとbを入れ替えた数は%dと%dです。\n",a,b);
  printf("cとdを入れ替えた数は%fと%fです。\n",c,d);

  return 0;
}
