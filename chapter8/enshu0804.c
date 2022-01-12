#include<stdio.h>

#define NUMBER 5

void bsort(int a[], int n)
{
  int i,j;

  for(i = 0; i < n - 1; i++){
    for(j = 0; j < n - 1; j++){
      if(a[j] > a[j + 1]){
	int tmp = a[j + 1];
	a[j + 1] = a[j];
	a[j] = tmp;
      }
    }
  }
}


int main(void)
{
  int i;
  int height[NUMBER];

  printf("%d人の身長を入力してください。\n",NUMBER);
  for(i = 0; i < NUMBER; i++){
    printf("%2d番：",i + 1);
    scanf("%d",&height[i]);
  }

  bsort(height,NUMBER);

  puts("昇順にソートしました。");
  for(i = 0; i < NUMBER; i++)
    printf("%2d番：%d\n",i + 1,height[i]);

  return 0;
}