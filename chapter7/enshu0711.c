#include<stdio.h>

int main(void)
{
  int i;
  float x1,x2;
  float sum1,sum2;

  sum1 = 0.0;
  sum2 = 0.0;
  
  x1 = 0.0;
  
  for(i = 0; i <= 100; i++){
    x2 = i/100.0;

    sum1 += x1;
    sum2 += x2;
    
    printf("sum1 = %f  sum2 = %f\n",sum1,sum2);
    x1 += 0.01;
  }
  return 0;
}
