#include<stdio.h>

int str_chnum(const char s[], int c)
{
  int i;
  int cnt = 0;
  
  for(i = 0; i < 128; i++){
    if(s[i] == c)
      cnt++;
  }

  return cnt;
}



int main(void)
{
  char str[128];
  char c;

  printf("文字列を入力してください。\n");
  printf("文字列：");
  scanf("%s",str);

  printf("探す文字を入力してください。\n");
  printf("探す文字：");
  scanf("%s",&c);
  
  printf("文字%cは%d個あります。\n",c,str_chnum(str,c));
  /* １文字として出力する時の変換指定子は%cを使う。 */
  
  return 0;
}
