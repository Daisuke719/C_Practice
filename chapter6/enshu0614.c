#include<stdio.h>

int main(void)
{
  int i;
  static double vx[5];

  for(i = 0; i < 5; i++)
    printf("vx[%d] = %f\n",i,vx[i]);

  return 0;
}
