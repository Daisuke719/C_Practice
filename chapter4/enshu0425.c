#include<stdio.h>
int main(void)
{
  int i,j,no,sum;

  puts("下向き数字ピラミッドを作ります。");
  printf("何段ですか：");
  scanf("%d",&no);

  sum = no + 1;
  
  for(i = 1; i <= no; i++){

    for(j = 1; j <= i - 1; j++)
      putchar(' ');
      
    for(j = 1; j <= 2 * (sum - i) - 1; j++)
      printf("%d",i % 10);
    
    putchar('\n');
  }
  
  return 0;
}
