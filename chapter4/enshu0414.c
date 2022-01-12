#include<stdio.h>
int main(void)
{
  int no,tmp;
  int i = 1;

  do{
    printf("正の整数を入力してください：");
    scanf("%d",&no);
    
    if(no <= 0)
      printf("%dは正の整数ではありません。",no);
  }while(no <=0);
    
  for(i = 1; no >= i; i++){
    tmp = i % 10;
    printf("%d",tmp);
  }

  printf("\n");
  
  return 0;
}
