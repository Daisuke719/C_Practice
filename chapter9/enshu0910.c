#include<stdio.h>

void del_digit(char s[])
{
  int i = 0;

  while(s[i]){
    if(s[i] < '0' || s[i] > '9')
      putchar(s[i]);
    i++;
  }
  putchar('\n');
}



int main(void)
{
  char str[128];

  printf("文字列を入力してください：");
  scanf("%s",str);

  del_digit(str);

  return 0;
}
