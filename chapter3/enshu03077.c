#include<stdio.h>
int main(void)
{
  int n1,n2,n3,n4,max,a,b;

  puts("四つの整数を入力してください。");
  printf("整数１："); scanf("%d",&n1);
  printf("整数２："); scanf("%d",&n2);
  printf("整数３："); scanf("%d",&n3);
  printf("整数４："); scanf("%d",&n4);

  if(n1 > n2)
    a = n1;
    else
      a =n2;

  if(n3 > a)
    b = n3;
  else
    b = a;

  if(n4 > b)
    max = n4;
  else
    max = b;

  printf("最も大きな値は%dです。\n",max);

  return 0;
}
