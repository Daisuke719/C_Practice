#include<stdio.h>

void intary_rcpy(int v1[],const int v2[],int n)
{
  int i;
  int tmp;

  for(i = 0; i < n; i++)
    v1[i] = v2[n-1-i];
}

int main(void)
{
  int n,i;

  printf("要素数を入力してください。\n");
  printf("n："); scanf("%d",&n);
  putchar('\n');
  printf("各要素を入力してください。\n");

  int dai[n];
  int you[n];
  for(i = 0; i < n; i++){
    printf("[%d]個目：",i + 1); 
    scanf("%d",&dai[i]);
  }
  
  printf("各要素を反転し、別の配列に格納した物を表示します。\n");

  intary_rcpy(you,dai,n);

  for(i = 0; i < n; i++)
    printf("%d ",you[i]);

  putchar('\n');
  
  return 0;
}
