#include<stdio.h>
int main(void)
{
  int n;
  double x;

  n = 9; /*　これがn=9.99だと怒られる。　*/
  x = 9.99;

  printf("int型変数nの値：%d\n",n);
  printf("n/2：%d\n",n/2);

  printf("double型変数xの値：%f\n",x);
  printf("x/2：%f\n",x/2);

  return 0;
}
