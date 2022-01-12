#include<stdio.h>

int str_chnum(const char *s)
{
  int cnt;

  while(*s++){
    if(*s == 'c')
      cnt++;
  }

  return cnt;
}


int main(void)
{
  char s[128];

  printf("文字列を入力してください：");
  scanf("%s",s);

  printf("文字列の含まれているcの個数は%dです。\n",str_chnum(s));

  return 0;
}
