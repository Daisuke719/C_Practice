/* 実験：変数に文字列は代入できるのか。また、その文字列はどの関数で表示できるのか。 */
/* scanfからじゃ文字列を変数に代入させることはできなかった。 */
/* */

#include<stdio.h>
int main(void)
{
  int x;
  
  printf("変数に代入する文字列：");

  while((x = getchar()) != EOF)
    putchar(x);

  printf("\n");

  return 0;
}
