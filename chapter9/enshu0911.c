#include<stdio.h>

#define NUMBER 128
#define BIG    128

void put_strary(char s[][BIG], int n)
{
  int i;
  
  for(i = 0; i < n; i++)
    printf("s[%d] = \"%s\"\n",i,s[i]);
}


int main(void)
{
  int i,j;
  char cs[NUMBER][BIG];

  puts("文字列を入力してください。");

  for(i = 0; i < NUMBER; i++){
    printf("cs[%d]：",i);
    scanf("%s",cs[i]);

    for(j = 0; cs[i][j] != '\0'; j++){
      if(cs[i][j] != '$')
	break;
    }
    if(j == 5)
      break;
  }
      
  put_strary(cs,j);

  return 0;
}
