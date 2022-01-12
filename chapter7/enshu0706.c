#include<stdio.h>
#include<limits.h>

int main(void)
{
unsigned int x,y,z;

 x = 50000;
 y = 20000;
 z = x + y;

 printf("%u",UINT_MAX);
 printf("%u  %u  %u  ",x,y,z);

 return 0;
}
