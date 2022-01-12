/* 身長と標準体重の対応表を表示するプログラム。
体重＝（身長ー１００）＊０.９とする。*/

#include<stdio.h>
int main(void)
{
  int min,max,gap;
  int cnt;
  double data;
  
  printf("何cmから："); scanf("%d",&min);
  printf("何cmまで："); scanf("%d",&max);
  printf("何cmごと："); scanf("%d",&gap);

  for(cnt = min; cnt <= max; cnt += gap){
    data = (cnt - 100) * 0.9;
    printf("%dcm  %.2fkg\n",cnt,data);
  }
  return 0;
}
