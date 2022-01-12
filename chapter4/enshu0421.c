#include<stdio.h>
int main(void)
{
  int no,i,j;

  puts("正方形を作ります。");
  printf("一辺の長さ：");
  scanf("%d",&no);

  for(i = 1; no >= i; i++){
    for(j = 1; no >= j; j++)
      putchar('*');
    putchar('\n');
  }
  return 0;  
}
