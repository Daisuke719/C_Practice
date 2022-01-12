#include<stdio.h>
int main(void)
{
  int uchida;
  int satoh;
  int sanaka;
  int hiraki;
  int masaki;
  int sum = 0;

  printf("5人の点数を入力してください。\n");
  printf("１番："); scanf("%d",&uchida); sum += uchida;
  printf("２番："); scanf("%d",&satoh);  sum += satoh;
  printf("３番："); scanf("%d",&sanaka); sum += sanaka;
  printf("４番："); scanf("%d",&hiraki); sum += hiraki;
  printf("５番："); scanf("%d",&masaki); sum += masaki;

  printf("合計点：%5d\n",sum);
  printf("平均点：%5.1f\n",(double)sum / 5);

  return 0;
}
