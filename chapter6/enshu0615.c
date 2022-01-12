#include<stdio.h>

void put_count()
{
  static int x = 1;

  printf("put_count：%d回目\n",x++);
  
}

int main(void)
{
  int i,n;

  printf("何回呼び出しますか：");
  scanf("%d",&n);

  for(i = 0; i < n; i++)
    put_count();

  return 0;
}
