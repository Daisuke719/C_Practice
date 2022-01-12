#include<stdio.h>
int main(void)
{
  int i,j;
  int student[6][2];
  int sum1 = 0;
  int sum2 = 0;
  int sum3 = 0;

  for(i = 0; i < 6; i++){
    for(j = 0; j < 2; j++){
      if(j == 0)
	printf("%d人目の国語の点数を入力してください：",i + 1);
      else
	printf("%d人目の数学の点数を入力してください：",i + 1);

      scanf("%d",&student[i][j]);
    }
  }
  putchar('\n');

  /* 科目ごとの合計点と平均点を表示する。 */
  for(i = 0; i < 6; i++){
    sum1 += student[i][0];
    sum2 += student[i][1];
  }
  printf("国語の合計点は%dで平均点は%fです。\n",sum1,(double)sum1 / 6);
  printf("数学の合計点は%dで平均点は%fです。\n",sum2,(double)sum2 / 6);

  putchar('\n');
    
  /* 学生ごとの合計点と平均点を表示する。 */
  for(i = 0; i < 6; i++){
    sum3 = (student[i][0] + student[i][1]);
    printf("%d人目の国語と数学の合計点は%dで平均点は%fです。\n",i + 1,sum3,(double)sum3 / 2);
  }
  putchar('\n');
  
  return 0;
}
