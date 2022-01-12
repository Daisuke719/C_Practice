#include<stdio.h>

int main(void)
{
  char str[4];

  str[0] = 'A';
  str[1] = 'B';
  str[2] = 'C';
  str[3] = '\0'; /* ここを\0ではなくてDにしたら、全く問題なくABCDと出力されるが、\0の役割は？ */

  printf("文字列strは\"%s\"です。\n",str);

  return 0;
}
