#include<stdio.h>
int main(void)
{
  int i,j,len;

  puts("右上直角に等辺三角形を作ります。");
  printf("短辺：");
  scanf("%d",&len);

  for(i = 1; i <= len; i++){
    for(j = 1; j <= i - 1; j++)
      putchar(' ');
    for(j = 1; j <= len - i + 1; j++)
      putchar('*');
    putchar('\n');
  }
  return 0;
}
