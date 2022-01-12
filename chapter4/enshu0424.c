#include<stdio.h>
int main(void)
{
  int no,i,j;

  puts("ピラミッドを作ります。");
  printf("何段ですか：");
  scanf("%d",&no);

  for(i = 1; i <= no; i++){
    for(j = 1; j <= no - i; j++)
/* no-i個のputcharを実行させたければ、上のように、(j=1; j<=no-1; j++)と表す。 */
      putchar(' ');
    for(j = 1; j <= (i - 1) * 2 + 1; j++)
      putchar('*');

    putchar('\n');
  }

  return 0;
}
