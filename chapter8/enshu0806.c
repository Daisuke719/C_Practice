#include<stdio.h>

int factorial(int n)
{
  int i;
  int tmp = 1;
  
  for(i = 0; i < n; i++){
    tmp *= (n - i);
  }
  return tmp;
}


int main(void)
{
  int num;

  printf("整数を入力してください：");
  scanf("%d",&num);

  printf("%dの階乗は%dです。\n",num,factorial(num));

  return 0;
}
