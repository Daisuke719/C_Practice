#include<stdio.h>

int str_char(const char s[], int c)
/*　受け取っている実引数cは、int型だが、main関数ではchar型で定義されているので、受け取った文字を、文字に与えられている整数値番号で渡されている。つまり、str_char関数で使われているcは整数値である。　*/
{
  int i = 0;
  int cnt = 0;

  while(1){

    cnt++;
    
    if(s[i] == c)
      return cnt;

    if(s[i] == '\0')
      return -1;

    
    i++;
  }

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
  
  printf("文字%cは%d番目にあります。\n",c,str_char(str,c));
  /* １文字として出力する時の変換指定子は%cを使う。 */
  
  return 0;
}
