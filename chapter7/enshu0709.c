#include<stdio.h>
#include<math.h>

int main(void)
{
  int n;

  printf("正方形の面積を入力してください。\n");
  printf("一辺：");
  scanf("%d",&n);

  printf("一辺は%fです。\n",sqrt(n));

  return 0;
}
