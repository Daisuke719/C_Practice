#include<stdio.h>

int main(void){
    int x,y,n,i,j;
    long count = 0;
    scanf("%d",&n);
    
    for(i = n; x > i; i++){
        x = 0;
        x++;
        for(j = n; y > j; j++){
            y = 0;
            y++;
            if((x*x)+(y*y) <= (n*n)){
                count++;
            }
        }
    }
    printf("%d:%.15ld\n",n,count);
}
