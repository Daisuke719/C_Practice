#include<stdio.h>

#define NUMBER 5

int main(void)
{
  /*  int NUMBER = 5; 

 #define NUMBER 5 じゃなくて、上のように書いても良い。*/
  int i;
  int tensu[NUMBER];
  int sum = 0;
  

  printf("%d人の点数を入力してください。\n",NUMBER);

  for(i = 0; i < NUMBER; i++){
    printf("%2d番：",i + 1);
    scanf("%d",&tensu[i]);
    sum += tensu[i];
  }

  printf("合計点：%5d\n",sum);
  printf("平均点：%5.1f\n",(double)sum / NUMBER);

  return 0;
}

/* #defineを使うメリットとしては、値の管理を一箇所に集約できることと、マジックナンバー（なんの値なのかわからない数字）をなくすこと、などである。
