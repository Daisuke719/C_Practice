#include<stdio.h>
int main(void)
{
  int num,month;

  printf("何月ですか：");
  scanf("%d",&num);

  switch(num){

  case 1 : month = 101; 
  case 2 : month = 101; break;
  case 3 : month = 102; 
  case 4 : month = 102;
  case 5 : month = 102; break;
  case 6 : month = 103;
  case 7 : month = 103;
  case 8 : month = 103; break;
  case 9 : month = 104;
  case 10: month = 104;
  case 11: month = 104; break;
  case 12: month = 101; break;
  default : month = 105; break;
  }

  switch(month){

  case 102 : printf("%d月は春です。\n",num);
    break;

  case 103 : printf("%d月は夏です。\n",num);
    break;

  case 104 : printf("%d月は秋です。\n",num);
    break;

  case 101 : printf("%d月は冬です。\n",num);
    break;

  case 105 : printf("%d月はありません。\n",num);
    break;
  }
  
  return 0;
}
