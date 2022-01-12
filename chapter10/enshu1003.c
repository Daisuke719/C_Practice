#include<stdio.h>

void sort3(int *n1, int *n2, int *n3)
{
  int temp;

  if(*n1 > *n2){
    temp = *n1;
    *n1  = *n2;
    *n2  = temp;
  }

  if(*n2 > *n3){
    temp = *n2;
    *n2  = *n3;
    *n3  = temp;
  }
  
  if(*n1 > *n2){
    temp = *n1;
    *n1  = *n2;
    *n2  = temp;
  }
}


int main(void)
{
  int na,nb,nc;

  puts("三つの整数を入力してください。");
  printf("整数A："); scanf("%d",&na);
  printf("整数B："); scanf("%d",&nb);
  printf("整数C："); scanf("%d",&nc);

  sort3(&na,&nb,&nc);

  puts("昇順にソートしました。");
  printf("整数Aは%dです。\n",na);
  printf("整数Bは%dです。\n",nb);
  printf("整数Cは%dです。\n",nc);

  return 0;
}
