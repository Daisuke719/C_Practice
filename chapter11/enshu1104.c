#include<stdio.h>

void put_string(const char *s)
{
  printf("入力した文字列は%sです。\n",s);
}


int main(void)
{
  char *a;

  printf("文字列を入力してください：");
  scanf("%s",a);

  put_string(a);

  return 0;
}
