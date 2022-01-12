#include<stdio.h>

int str_length(const char s[])
{
  int len = 0;

  while(s[len])
    len++;

  return len;
}


int main(void)
{
  char str[128]; /*　ナル文字を含めて１２８文字まで格納できる。 */

  printf("文字列を格納してください：");
  scanf("%s",str);

  printf("文字列\"%s\"の長さは%dです。\n",str,str_length(str));

  return 0;
}
