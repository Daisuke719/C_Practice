#include<stdio.h>
int main(void)
{
  int no,i;

  printf("整数値：");
  scanf("%d",&no);

  for(i = 1; no >= i; i++){
    if(i % 2)
      printf("%d ",i);
  }
  putchar('\n');

  return 0;
}
