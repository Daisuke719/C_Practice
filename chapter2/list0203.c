/* 二つの整数値を読み込んで商と剰余を表示　*/

#include<stdio.h>
int main(void)
{
  int no1,no2;

  puts("二つの整数値を入力してください。");
  printf("整数a:"); scanf("%d",&no1);
  printf("整数b:"); scanf("%d",&no2);

  printf("aをbで割ると%dあまり%dです。\n",no1/no2,no1%no2);

  return 0;
}
