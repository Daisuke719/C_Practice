#include<stdio.h>

void set_idx(int *v,int n)
{
  int i;

  for(i = 0; i < n; i++)
    {
      *(v+i)  = i;
    }
}

int main(void)
{
  int i;
  int na[5] = {};

  set_idx(na,5);

  for(i = 0; i < 5; i++)
    printf("na[%d]：%d\n",i,na[i]);

  return 0;
}
