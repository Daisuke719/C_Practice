#include<stdio.h>

int main(void)
{
  int ch; /* 変数はchでなくても良い。 */

  while((ch = getchar()) != EOF)
    putchar(ch);

  return 0;
}
