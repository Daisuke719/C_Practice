#include<stdio.h>
int main(void)
{
  int noa,nob,max,min,i,j;

  puts("長方形を作ります。");
  printf("辺1："); scanf("%d",&noa);
  printf("辺2："); scanf("%d",&nob);

  if(noa >= nob){
    max = noa;
    min = nob;
  }else{
    max = nob;
    min = noa;
  }

  for(i = 1; min >= i; i++){
    for(j = 1; max >= j; j++)
      putchar('*');
    putchar('\n');
  }
  
 return 0;
}
