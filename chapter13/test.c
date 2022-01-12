#include<stdio.h>

void swap(int hairetsu[100][2]){

}

int main(void)
{
  int b = 1;
  int i = 0, j = 0;
  int time[100][2];
  int hairetsu[100];

  for(i = 0; i < 100; i++){
    printf("hairetsu[%d]：",i);
    scanf("%d",&hairetsu[i]);
  }
  
  for(i = 0; i < 100; i++){
    time[i][2] = 0;
  }
  
  
  while(1){
    time[i][1] = hairetsu[j];
    if(hairetsu[j] == hairetsu[j + 1]){
      i--;
    }
    j++;
    i++;
    time[i][2]++;
    }
  swap(hairetsu);

  return 0;
}
