#include<stdio.h>

int main(void)
{
  char filename[256];
  FILE *fp;

  printf("探したいファイル名を入力してください：");
  scanf("%s",filename);

  fp = fopen(filename, "r");
  
  if(fp == NULL)
    printf("\aファイル%sは存在しません。\n",filename);
  else{
    printf("\aファイル%sは存在します。\n",filename);
    fclose(fp);
  }
  return 0;
}
