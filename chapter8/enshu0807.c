/* 以下は失敗したソースファイル。

#include<stdio.h>

int combination_dy(int dyn, int dyr);

int combination_dx(int dxn, int dxr)
{
  if(dxr > 1)
    return  combination_dx(dxn - 1,dxr - 1) + combination_dy(dxn - 1, dxr);
  else
    return  dxr;
}


int combination_dy(int dyn, int dyr)
{
  if(dyn != dyr)
    return  combination_dx(dyn - 1, dyr - 1) + combination_dy(dyn - 1, dyr);
  else
    return  1;
}


int main(void)
{
  int n,r;

  do{
  printf("nCrを求めるnとrを入力してください。\n");
  printf("n："); scanf("%d",&n);
  printf("r："); scanf("%d",&r);

  if(n < r)
    puts("エラーだよ。");
  
  }while(n < r);
  
  printf("nCrとは%dです。\n",combination_dx(n,r) + combination_dy(n,r));

  return 0;
}

*/

#include<stdio.h>

int factorial(int n)
{
  if(n > 0)
    return n * factorial(n - 1);
  else
    return 1;
}

int combination(int n, int r)
{
  if(n > r)
    return factorial(n) / (factorial(r) * factorial(n - r));

  else if(n == r)
    return 1;

  else
    return 0;
}


int main(void)
{
  int n,r;

  do{
  printf("異なるn個の整数からr個の整数を取り出す組み合わせの数のnCrを求めます。\n");
  printf("非負整数n：");  scanf("%d",&n);
  printf("非負整数r：");  scanf("%d",&r);

  if(n < r)
    printf("nがrより小さいよ!\n");

  }while(n < r);
 

  
  printf("異なる%d個の整数から%d個の整数を取り出す組み合わせの数は%dです。\n",n,r,combination(n,r));

  return 0;
}
