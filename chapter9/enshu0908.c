#include<stdio.h>

void put_stringr(char s[])
{
  int i = 0;
  int tmp = 0;
  
  while(s[i])
    i++;

  int cnt = i;
  
  for(i = 0; i < (cnt / 2); i++){
    tmp = s[i];
    s[i] = s[cnt - i - 1];
    s[cnt - i - 1] = tmp;
  }
}




int main(void)
{
  char str[128];

  printf("文字列を入力してください：");
  scanf("%s",str);

  put_stringr(str);

  printf("入力した文字列を逆から表示すると、%sです。\n",str);
  
  return 0;
}
