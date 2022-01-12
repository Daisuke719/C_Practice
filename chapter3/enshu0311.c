#include<stdio.h>
int main(void)
{
  int na,nb,gap;

  puts("二つの値を入力してください。");
  printf("整数A："); scanf("%d",&na);
  printf("整数B："); scanf("%d",&nb);

  if(na > nb)
    gap = na - nb;
  else if(na < nb)
    gap = nb - na;
  else
    gap = 0;

  if(gap == 0 || gap == 1 || gap == 2 || gap == 3 || gap == 4 || gap == 5 || gap == 6 || gap == 7 || gap == 8 || gap == 9 || gap == 10)
    printf("それらの差は１０以下です。\n");
  else
    printf("それらの差は１１以上です。\n");

  return 0;
}
