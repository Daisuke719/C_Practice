#include<stdio.h>
int main(void)
{
  int a,b;

  puts("二つの整数を入力してください。");
  printf("整数a:"); scanf("%d",&a);
  printf("整数b:"); scanf("%d",&b);

  if(b % a)
    puts("bはaの約数です。");
  else
    puts("bはaの約数ではありません。");

  return 0;
}
