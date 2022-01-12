#include<stdio.h>

int main(void)
{
  int i;
  int cnt1, cnt2;
  char a[][5] = {"LISP", "C", "Ada"};
  char *p[]   = {"PAUL", "X", "MAC"};

  cnt1 = sizeof(a) / 5;

  cnt2 = sizeof(p);

  for(i = 0; i < cnt1; i++)
    printf("a[%d] = \"%s\"\n",i,a[i]);

   for(i = 0; i < cnt2; i++)
    printf("p[%d] = \"%s\"\n",i,p[i]);

   return 0;
}

/*　このままではセグフォと呼ばれるエラーが起きてしまう。segmentation fault 11　というもの。これは、用意されていない配列にアクセスしてしまったりするときに出てくるらしい。また、ポインタが指しているアドレスに何も入っていなかったり、NULLだったりしても起こるらしい。 */
