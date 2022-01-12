#include<stdio.h>

int main(void)
{
  int i;
  float x1,x2;

  x1 = 0.0;
  
  for(i = 0; i <= 100; i++){
    x2 = i/100.0;
    printf("x = %f  X = %f\n",x1,x2);

    x1 += 0.01;
  }
  return 0;
}
