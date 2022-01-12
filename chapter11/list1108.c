#include<stdio.h>
#include<string.h>

size_t strlen(const char *s)
{
  size_t len = 0;

  while(*s++)
    len++;

  return len;
}



int main(void)
{
  char s[128];

  printf("文字列を入力してください：");
  scanf("%s",s);

  printf("入力した文字列の長さは%luです。\n",strlen(s));

  return 0;
}
