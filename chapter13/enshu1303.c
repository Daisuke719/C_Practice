#include<stdio.h>

typedef struct {
  char name1[128];
  double height1;
  double weight1;
}   People;


void swap_people(People *x, People *y)
{
  People tmp = *x;
  *x = *y;
  *y = tmp;
}

void sort_by_height(People filedata[], int n)
{
  int i,j;
 
  for(i = 0; i < n - 1; i++){
    for(j = n - 1; j > i; j--){
      if(filedata[j - 1].height1 > filedata[j].height1)
	swap_people(&filedata[j - 1], &filedata[j]);
    }
  }
  for(i = 0; i < 128;  i++){
    printf("%-10s %5.1f %5.1f\n", filedata[i].name1, filedata[i].height1, filedata[i].weight1);
  }
}

int main(void)
{
  FILE   *fp;
  int    ninzu = 0;
  char   name[128];
  double height, weight;
  double hsum = 0.0;
  double wsum = 0.0;

  People filedata[128];
  int i;
  int j;
  
  if((fp = fopen("hw.dat", "r")) == NULL)
    printf("\aファイルをオープンできません。\n");
  else{
    while(fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3){

      i++;

      
      for(j = 0; j < 128; j++){
	filedata[i].name1[j] = name[j];
	if(name[j] == '\0')
	  break;
      }
      
      filedata[i].height1 = height;
      filedata[i].weight1 = weight;

      ninzu++;
      hsum += height;
      wsum += weight;
    }

    sort_by_height(filedata, i - 1);
    
    printf("-----------------------\n");
    printf("平均       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
    fclose(fp);
  }

  return 0;
}
