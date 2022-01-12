#include<stdio.h>

int min_of(const int v[],int n)
{
  int min;
  int i;

  min = v[0];

  for(i = 1; i < n; i++){
    if(min > v[i])
      min = v[i];
  }
  return min;   
}



int main(void)
{
  int i,n;
  
  printf("要素数nを入力してください。\n");
  printf("n："); scanf("%d",&n);
  printf("各要素を入力してください。\n");

  int dai[n];
  
  for(i = 0; i < n; i++){
    printf("[%d]番目：",i + 1);
    scanf("%d",&dai[i]);
  }

  /* 各要素に数値はしっかり入っていることは確認済み。*/
  
  printf("入力された数の最小値は%dです。\n",min_of(dai,n));

  return 0;
}
