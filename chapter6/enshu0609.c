#include<stdio.h>

/* 渡された配列の要素を反転　*/
void rev_intary(int v[],int n)
{
  int i;
  int tmp;

  for(i = 0; i < (n/2); i++){
    tmp      = v[i];
    v[i]     = v[n-1-i];
    v[n-1-i] = tmp;
  }

}

/* 要素を入力させ、反転された配列を表示　*/
int main(void)
{
  int i,n;

  printf("要素数を入力してください。\n");
  printf("n："); scanf("%d",&n);
  putchar('\n');
  printf("要素を入力してください。\n");

  int dai[n];
  
  for(i = 0; i < n; i++){
    printf("[%d]個目",i + 1);
    scanf("%d",&dai[i]);
  }

  rev_intary(dai,n);

  printf("各要素を反転した値は\n");
  
  for(i = 0; i < n; i++)
    printf("%d ",dai[i]);

  printf("です。\n");
 
  return 0;
}
