#include<stdio.h>

/*　テキストの条件で探したい要素の位置を配列に入れ直す、というものがあるせいで、若干二度手間になっている。*/
int search_idx(const int v[],int idx[], int key, int n)
{
  int i;
  int m = 0;

  for(i = 0; i < n; i++){
    if(v[i] == key){
      idx[m] = i;
      m++;
    }
  }
  return m;
}

/*　探したい要素の個数を求めてその数を返す。*/
int search_id(int v[], int key, int n)
{
  int i;
  int m = 0;

  for(i = 0; i < n; i++){
    if(v[i] == key)
      m++;
  }
  return m;
}


/*　要素を入力させて、探したい値の個数を表示させる。*/
int main(void)
{
  int i,n,ky,cnt;
  
  printf("要素数を入力してください。\n");
  printf("要素数："); scanf("%d",&n);

  int vx[n];

  puts("各要素を入力してください。");
  
  for(i = 0; i < n; i++){
    printf("vx[%d]：",i);
    scanf("%d",&vx[i]);
  }


  printf("探す値：");
  scanf("%d",&ky);

  /*　探したい要素の個数の分だけ配列の要素を作った。*/
  cnt = search_id(vx,ky,n);

  int id[cnt];
  
  printf("%dは%d個です。\n",ky,search_idx(vx,id,ky,n));

  return 0;
}
