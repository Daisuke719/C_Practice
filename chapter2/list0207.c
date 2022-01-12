#include<stdio.h>
int main(void)
{
  double vx,vy;

  puts("二つの実数を入力してください。");

  printf("実数a："); scanf("%lf",&vx);
  printf("実数b："); scanf("%lf",&vy);

  printf("vx+vy=%f\n",vx+vy);
  printf("vx-vy=%f\n",vx-vy);
  printf("vx*vy=%f\n",vx*vy);
  printf("vx/vy=%f\n",vx/vy);

  return 0;
}
