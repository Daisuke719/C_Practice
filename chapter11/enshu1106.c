/*

#include<stdio.h>

char *str_chr(char *s, char *c)
{
  int cnt;
 
  while(*s++){
    if(*s == c)
      return s;
  }
  return NULL;
}



int main(void)
{
  char *key;
  char *s;

  printf("文字列を入力してください：");
  scanf("%s",s);

  printf("探す文字を入力してください：");
  scanf("%s",key);  ここに&keyと入れるとprintfしたときに、97があるポインタは、、と表示される。探す文字の文字番号なのかアドレスなのか。 

  printf("%sがあるポインタは%sです。\n",key,str_chr(s,key));

  return 0;
}


ここまでは自分が考えたソースファイル。
*/



#include <stdio.h>
#include <string.h>

char *str_chr(char *s, int c){

    int i;
    char *adress = NULL;

    for(i = 0; i < strlen(s); i++){
        if(c == *(s + i)){
            adress = (s + i);
            break;
        };
    }
    return adress;
}

int main(){

    char s[256];

    printf("入力 ： ");  scanf("%s", s);

    printf("cはアドレス%pにあります\n", str_chr(s, 'c'));

    return 0;
}

