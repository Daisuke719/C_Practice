#include<stdio.h>
int main(void)
{
  int na,nb,max,min,fin;
  int suma = 0;
  int cnt = -1;
  
  puts("二つの整数を入力してください。");
  printf("整数a："); scanf("%d",&na);
  printf("整数b："); scanf("%d",&nb);

  if(na == nb){
    printf("%d以上%d以下の全整数の和は０です。",na,nb);
}
  else{
    
  do{

    int sumb;
    
    cnt = cnt + 1;

    if(na > nb){
      max = na;
      min = nb;
      sumb = nb + cnt;
     
    }else{
      max = nb;
      min = na;
      sumb = na + cnt;
      
    }

    suma = suma + sumb; 
      
  }while( (cnt == (max - min) ) == 0);

  printf("%d以上%d以下の全整数の和は%dです。\n",min,max,suma);
  }
  
  return 0;
}
