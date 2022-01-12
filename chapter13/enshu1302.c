#include<stdio.h>

int main(void)
{
  char filename[256];
  FILE *fp;

  printf("消したいファイル名を入力してください：");
  scanf("%s",filename);

  fp = fopen(filename, "w");

  printf("\"%s\"は消去されました。\n",filename);
  
  return 0;
}
