#include<stdio.h>

void adjust_point(int *na)
{
   if(*na <= 0)
     *na = 0;
   else if(*na >= 100)
     *na = 100;
}

int main(void)
{
  int n;

  puts("値が0以下ならば0、100以上なら100を表示します。");
  printf("整数を入力してください：");
  scanf("%d",&n);

  adjust_point(&n);
  
  printf("\"%d\"\n",n);

  return 0;
}
