#include<stdio.h>

void put_stringn(const char s[], int n)
{
  int i;

  for(i = 0; i < n; i++)
    {
      int j = 0;
      
      while(s[j])
	putchar(s[j++]);
    }
  putchar('\n');
  
}


int main(void)
{
  char str[128];
  int n;

  printf("文字列を入力してください：");
  scanf("%s",str);

  printf("連続する回数を入力してください：");
  scanf("%d",&n);

  put_stringn(str,n);

  return 0;
}
