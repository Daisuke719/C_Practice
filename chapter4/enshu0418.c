#include<stdio.h>
int main(void)
{
  int no,i;

  do{
    
  printf("何個*を表示しますか：");
  scanf("%d",&no);

  if(no < 0)
    printf("もう一度入力してください。\n");

  }while(no <0);
  
  for(i = 1; i <= no; i++){
    if(i % 5 == 0)
      printf("*\n");
    else
      printf("*");
  }

  putchar('\n');

  return 0;
}
