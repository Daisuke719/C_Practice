#include<stdio.h>
int main(void)
{
  int i,j,k,l;
  int na[4][3];
  int nb[3][4];
  int seki[4][4] = {};

  /*  行列Aの構成要素を読み込む。*/
  for(i = 0; i < 4; i++){
    for(j = 0; j < 3; j++){
      printf("行列Aの%d行%d列の数字を入力してください：",i + 1, j + 1);
      scanf("%d",&na[i][j]);
      putchar('\n');
    }
  }

  /* 行列Bの構成要素を読み込む。*/
  for(i = 0; i < 3; i++){
    for(j = 0; j < 4; j++){
      printf("行列Bの%d行%d列の数字を入力してください：",i + 1, j + 1);
      scanf("%d",&nb[i][j]);
      putchar('\n');
    }
  }

  /*　おまけna　*/
  for(i = 0; i < 4; i++){
    for(j = 0; j < 3; j++){
      printf("%d ",na[i][j]);
    }
    putchar('\n');
  }


  /*　おまけnb　*/
  for(i = 0; i < 3; i++){
    for(j = 0; j < 4; j++){
      printf("%d ",nb[i][j]);
    }
    putchar('\n');
  }

  putchar('\n');
  
  /*  本番　*/
  for(k = 0; k < 4; k++){
    for(l = 0; l < 4; l++){
      for(j = 0; j < 3; j++){
	  seki[k][l] += (na[k][j] * nb[j][l]);
      }
    }
  }

  puts("行列Aと行列Bの積は");

  for(k = 0; k < 4; k++){
    for(l = 0; l < 4; l++){
      printf("%d ",seki[k][l]);
    }
    putchar('\n');
  }
  puts("です。");

  return 0;
}
