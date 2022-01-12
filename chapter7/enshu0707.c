#include<stdio.h>

int main(void)
{
  float a;
  double b;
  long double c;

  printf("float a    ：");    scanf("%f",&a);
  printf("double b   ：");    scanf("%lf",&b);
  printf("long double：");    scanf("%Lf",&c);

  printf("a = %f\n",a);
  printf("b = %f\n",b);
  printf("c = %Lf\n",c);
  
  return 0;
}
