#include<stdio.h>
int main(void)
{
  int no1,no2;

  puts("二つの整数値を入力してください。");
  printf("整数x:"); scanf("%d",&no1);
  printf("整数y:"); scanf("%d",&no2);
  
  printf("xはyの%d%%です。\n",no1*100/no2);

  return 0;
}
