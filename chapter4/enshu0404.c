/* カウントダウンのプログラム */
/* 0ではなく1までカウントする。*/
/*　入力された値が0以下の時はカウントを行わない。*/

#include<stdio.h>
int main(void)
{
  int no;

  printf("正の整数を入力してください：");
  scanf("%d",&no);

  if(no > 0){
    
    while(no >= 1)
      printf("%d ",no--);

    printf("\n");
  }
  return 0;
}
