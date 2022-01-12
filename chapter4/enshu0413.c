#include<stdio.h>
int main(void)
{
  int no,i;
  int sum = 0;
/* ここでsumの値を定義しておかないと、下でsum+=iをしたときに、何か適当な数字の入ったsumにiが加えられたものになってしまう。 */
  
  printf("nの値：");
  scanf("%d",&no);

  for(i = 0; i <= no; i++)
    sum += i;

  printf("１から%dまでの和は%dです。\n",no,sum);

  return 0;
}
