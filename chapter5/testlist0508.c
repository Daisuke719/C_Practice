/* 配列の宣言時に[]の中に変数を入れることはできるかどうか。 */
/* 個数を入力し、それに従って配列の箱を用意する。*/
#include<stdio.h>
int main(void)
{
  int sum;
  int i;

  printf("配列の箱を幾つ用意しますか：");
  scanf("%d",&sum);

  int x[sum];

  for(i = 0; i < sum; i++)
    x[i] = i;

  for(i = 0; i < sum; i++)
    printf("x[%d] = %d\n",i,x[i]);

  return 0;
}
/* 結果：できる。*/
