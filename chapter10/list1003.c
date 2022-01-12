#include<stdio.h>

int main(void)
{
  int sato   = 178;
  int sanaka = 175;
  int masaki = 179;

  int *isako, *hiroko;

  isako  = &sato;   /*　isako はsato　を指す（佐藤くんが好き）*/
  hiroko = &masaki; /*  hirokoはmasakiを指す（真崎くんが好き）*/

  printf("いさ子さんの好きな人の身長：%d\n",*isako);
  printf("ひろ子さんの好きな人の身長：%d\n",*hiroko);
 
  isako = &sanaka;

  *hiroko = 180;

  putchar('\n');
  printf("佐藤君の身長：%d\n",sato);
  printf("佐中君の身長：%d\n",sanaka);
  printf("真崎君の身長：%d\n",masaki);
  printf("いさ子さんの好きな人の身長：%d\n",*isako);
  printf("ひろ子さんの好きな人の身長：%d\n",*hiroko);
  /*　すぐ上の*hirokoには180が代入されていて、*hirokoはmasakiのエイリアス（あだ名）と同じだから、masakiにも180が代入される。 */
  
  return 0;
}
