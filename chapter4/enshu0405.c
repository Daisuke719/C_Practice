#include<stdio.h>
int main(void)
{
  int no,i;

  printf("正の整数を入力してください：");
  scanf("%d",&no);

  i = 1;
  
  if(no > 0){
    
  while(i <= no)
    printf("%d ",i++);

  printf("\n");
  
  }

  return 0;
}
