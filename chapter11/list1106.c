#include<stdio.h>

char *str_copy(char *d, const char *s)
{
  char *t = d;

  while(*d++ = *s++)/*　ここが=じゃなくて==じゃないとコンパイルエラーが起きてしまう。*/
    ;
  return t;
}


int main(void)
{
  char str[128] = "ABC";
  char tmp[128];

  printf("str = \"%s\"\n",str);

  printf("コピーするのは：");
  scanf("%s",tmp);

  str_copy(str,tmp);

  puts("コピーしました。");
  printf("str = \"%s\"\n",str);

  return 0;
}
