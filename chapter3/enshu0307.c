#include<stdio.h>
int main(void)
{
  int n1,n2,n3,n4,max;

  puts("四つの整数を入力してください。");
  printf("整数１："); scanf("%d",&n1);
  printf("整数２："); scanf("%d",&n2);
  printf("整数３："); scanf("%d",&n3);
  printf("整数４："); scanf("%d",&n4);

  if(n1 > n2){
    if(n1 > n3){
      if(n1 > n4)
	max = n1;
      else
	max = n4;
    }
    else if(n3 > n4)
      max = n3;
    else
      max = n4;
  }
  else if(n2 < n3)
    if(n3 > n4)
      max = n3;
    else
      max = n4;
  else if(n2 > n4)
    max = n2;

  printf("最も大きい値は%dです。\n",max);

  return 0;    
}
