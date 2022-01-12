#include<stdio.h>

#define diff(x,y)  (x)-(y)

int main(void)
{
  int a,b;
  int max,min;

  printf("二つの整数を入力してください。\n");
  printf("整数a："); scanf("%d",&a);
  printf("整数b："); scanf("%d",&b);

  if(a > b){
    max = a;
    min = b;
  }else{
    max = b;
    min = a;
  }
    
    printf("それらの差は%dです。\n",diff(max,min));

    return 0;
}
