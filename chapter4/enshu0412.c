#include<stdio.h>
int main(void)
{
  int no,i;

  i = 0;

  do{

  printf("正の整数を入力してください：");
  scanf("%d",&no);

  if(no <= 0)
    printf("それは正の整数ではありません。\n");

  }while(no <= 0);

  
  printf("%dは",no);

  
  while(no > 0){
    i++;
    no /= 10;
  }

  printf("%d桁です。\n",i);

  return 0;
}
