#include<stdio.h>

void alert(int na)
{
  int i;
  
 for(i = 0; i < na; i++)
    putchar('\a');
}


int main(void)
{
  int n;

  printf("何回警報を鳴らしますか：");
  scanf("%d",&n);

  alert(n);
  
  return 0;
}
