#include<stdio.h>

#define NAME_LEN 64

struct student {
  char name[NAME_LEN];
  int height;
  float weight;
  long schols;
};


int main(void)
{
  struct student takao = {"Takao", 173, 86.2};

  printf("氏　名：%p\n",  &takao.name);
  printf("身　長：%p\n",  &takao.height);
  printf("体　重：%p\n",  &takao.weight);
  printf("奨学金：%p\n",  &takao.schols);

  return 0;
}
