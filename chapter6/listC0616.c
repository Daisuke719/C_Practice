/*　多次元配列の受け渡しについてのソースファイル　*/

#include<stdio.h>

/*　int[3]型を要素型とする要素数nの配列mの全構成要素にxを代入　*/
void fill(int m[][3], int n, int v)
{
  int i,j;

  for(i = 0; i < n; i++)
    for(j = 0; j < 3; j++)
      m[i][j] = v;
}

/*　int[3]型を要素型とする要素数nの配列mの全構成要素を表示　*/
void mat_print(const int m[][3], int n)
{
  int i,j;

  for(i = 0; i < n; i++){
    for(j = 0; j < 3; j++)
      printf("%4d",m[i][j]);
    putchar('\n');
  }
}


int main()
{
  int no;
  int x[2][3] = {0};
  int y[4][3] = {0};

  printf("全構成要素に代入する値：");
  scanf("%d",&no);

  fill(x,2,no);
  fill(y,4,no);

  printf("--- x ---\n");  mat_print(x,2);
  printf("--- y ---\n");  mat_print(y,4);

  return 0;
}
