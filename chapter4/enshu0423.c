#include<stdio.h>
int main(void)
{
  int i,j,len,no;

  puts("左上直角に等辺三角形を作ります。");
  printf("短辺：");
  scanf("%d",&len);

  no = len + 1;
  
  for(i = 1; i <= len; i++){
    for(j = 1; j <= no - i; j++)
      putchar('*');
    
    putchar('\n');

  }

  return 0;
}
