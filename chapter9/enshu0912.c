#include<stdio.h>

#define NUMBER 128
#define BIG    128


void rev_strings(char s[][BIG], int n)
{
  int i;
  int x;
  int tmp;
  /*　下にあるj = 0;がここにあったせいで、一番大きなfor文の中でjがリセットされずに使い続けられていた。そのため、すぐしたのwhile文のなかのs[i][j]のjは一つ目の文字列の文字数が代入されていたから、whileぶんは２週目以降は実行されなかった。*/
  
  for(i = 0; i < n; i++){

    int cnt = 0;
    int j = 0;
    
    while(s[i][j]){
	cnt++;
	j++;
    }	
      
    for(x = 0; x < (cnt / 2); x++){
      tmp = s[i][x];
      s[i][x] = s[i][cnt - 1 - x];
      s[i][cnt - 1 - x] = tmp;
    }

  }
}


int main(void)
{
  int i,n;
  char cs[NUMBER][BIG];

  printf("文字列の個数を入力してください：");
  scanf("%d",&n);
  
  puts("文字列を入力してください。");

  for(i = 0; i < n; i++){
    printf("cs[%d]：",i);
    scanf("%s",cs[i]);
  }

  rev_strings(cs,n);

  printf("それぞれを反転した文字列は{");

  for(i = 0; i < n; i++)
    printf(" \"%s\" ",cs[i]);

  puts("}です。");
  
  return 0;
}
