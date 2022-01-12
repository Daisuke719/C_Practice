#include<stdio.h>

enum animal { Dog, Cat, Monkey, Invalid};

void dog(void)
{
  puts("ワンワン!!");
}


void cat(void)
{
  puts("ニャ〜オ!!");
}


void monkey(void)
{
  puts("キッキッ!!");
}


enum animal select(void)
{
  int tmp;
  
  do{
    printf("0...犬　1...猫　2...猿　3...終了：");
    scanf("%d",&tmp);
  }while(tmp < Dog || tmp > Invalid);

  return tmp;
}


int main(void)
{
  enum animal selected;

  do{
    switch(selected = select()){
    case Dog    : dog();    break;
    case Cat    : cat();    break;
    case Monkey : monkey(); break;
    case Invalid: break;
/*　この上の１行は教科書には書かれていなかったけど、コンパイルでエラーが出たため書き加えた。*/
    }
  }while(selected != Invalid);

  return 0;
}
