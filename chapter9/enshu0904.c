#include <stdio.h>

void null_string(char s[]){
    s[0] = '\0';
}

int main(){

    char str[128];

    printf("入力：");  scanf("%s", str);
    printf("配列strに保存された文字は\"%s\"です\n", str);
   
    printf("初期化します\n");

    null_string(str);

    printf("初期化すると配列strに保存された文字は\"%s\"です\n", str);

    return 0;
}
