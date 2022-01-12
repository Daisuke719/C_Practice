#include<stdio.h>
int main(void)
{
  int i,k;
  int v[5];

  k = 5;
  
  for(i = 0; i < 5; i++){
    v[i] = k;
    k--;
  }

  for(i = 0; i < 5; i++)
    printf("v[%d] = %d\n",i,v[i]);

  return 0;
}
