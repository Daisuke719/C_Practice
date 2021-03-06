#include<stdio.h>
#include<string.h>

#define NUMBER   5
#define NAME_LEN 64

typedef struct{
    char  name[NAME_LEN];
    int   height;
    float weight;
    long  schols;
} Student; /* typedef宣言により、この構造体の型名をStudent型と名付けた。*/



void swap_Student(Student *x, Student *y)
{
  Student temp = *x;
  *x = *y;
  *y = temp;
}


/*　文字列の大小関係を比較する方法として、strcmp関数を用いる。名前順にソートが可能。*/
void sort_by_name(Student a[], int n)
{
  int i,j;

  for(i = 0; i < n - 1; i++){
    for(j = n - 1; j > i; j--)
      if(strcmp(a[j - 1].name, a[j].name) > 0)
        swap_Student(&a[j - 1], &a[j]);
  }
}




void sort_by_height(Student a[], int n)
{
  int i,j;

  for(i = 0; i < n - 1; i++){
    for(j = n - 1; j > i; j--)
      if(a[j - 1].height > a[j].height)
	swap_Student(&a[j - 1], &a[j]);
  }
}


int main(void)
{
  int i;
  int how;
  Student std[NUMBER];

  puts("5人の生徒情報を入力してください。\n");

  for(i = 0; i < NUMBER; i++){
    printf("%d人目\n",i + 1);
    printf("名　前："); scanf("%s",std[i].name);
    printf("身　長："); scanf("%d",&std[i].height);
    printf("体　重："); scanf("%f",&std[i].weight);
    printf("奨学金："); scanf("%ld",&std[i].schols); 
    putchar('\n');
  }
  
  for(i = 0; i < NUMBER; i++)
    printf("%-8s %6d%6.1f%7ld\n",std[i].name, std[i].height, std[i].weight, std[i].schols);


  printf("ソートの方法を選んでください。名前順...0 / 身長順...1：");
  scanf("%d",&how);

  if(how == 0)
    sort_by_name(std,NUMBER);
  else
    sort_by_height(std,NUMBER);


  puts("\n昇順にソートしました。");

  for(i = 0; i < NUMBER; i++)
    printf("%-8s %6d%6.1f%7ld\n",std[i].name, std[i].height, std[i].weight, std[i].schols);

  return 0;
}
