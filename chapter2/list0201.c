/*  読み込んだ二つの整数値の和・差・積・商・剰余を表示 */

#include<stdio.h>
int main(void)
{
  int n1,n2;
  
  printf("二つの整数を入力してください。\n");

  printf("整数１:"); scanf("%d",&n1);
  printf("整数２:"); scanf("%d",&n2);

  printf("n1+n2=%d\n",n1+n2);
  printf("n1-n2=%d\n",n1-n2);
  printf("n1*n2=%d\n",n1*n2);
  printf("n1/n2=%d\n",n1/n2);
  printf("n1%%n2=%d\n",n1%n2);
  
  return 0;
}
