#include<stdio.h>

void decrement_date(int *y, int *m, int *d)
{
  if(*d == 1){
    switch(*m){
    case 1 : *y = --*y; *m = 12; *d = 31; break;
    case 2 : *m = 1; *d = 31; break;
    case 3 : *m = 2; if(*y % 4 == 0)
		       *d = 29;
                     else
	               *d = 28;
                     break;

    case 4 :  *m = 3;  *d = 31; break;
    case 5 :  *m = 4;  *d = 30; break;
    case 6 :  *m = 5;  *d = 31; break;
    case 7 :  *m = 6;  *d = 30; break;
    case 8 :  *m = 7;  *d = 31; break;
    case 9 :  *m = 8;  *d = 31; break;
    case 10 : *m = 9;  *d = 30; break;
    case 11 : *m = 10; *d = 31; break;
    case 12 : *m = 11; *d = 30; break;
    }
  }
    else
      *d = --*d; /* y--はできない。なぜかエラーになってしまう。*/
}

void increment_date(int *y, int *m, int *d)
{
  switch(*m){
  case 1 : if(*d == 31){
               *m = 2;
               *d = 1;
               }
           else
              ++*d;

  case 2 : switch(*y % 4){
    case 0 : if(*d == 29){
               *m = 3;
               *d = 1;
               }  	      	
             else
              ++*d;
      break;
      
    case 1 : 
    case 2 : 
    case 3 : if(*d == 28){
	       *m = 3;
	       *d = 1;
               }
             else
	      ++*d;
      break;
    }
    break;
      
  case 3 : if(*d == 31){
               *m = 4;
               *d = 1;
               }  	      	
           else
              ++*d;
    break;
    
  case 4 : if(*d == 30){
               *m = 5;
               *d = 1;
               }  	      	
           else
              ++*d;
    break;
    
  case 5 : if(*d == 31){
               *m = 6;
               *d = 1;
               }  	      	
           else
              ++*d;
    break;
    
  case 6 : if(*d == 30){
               *m = 7;
               *d = 1;
               }  	      	
           else
              ++*d;
    break;
    
  case 7 : if(*d == 31){
               *m = 8;
               *d = 1;
               }  	      	
           else
              ++*d;
    break;
    
  case 8 : if(*d == 31){
               *m = 2;
               *d = 1;
               }  	      	
           else
              ++*d;
    break;
    
  case 9 : if(*d == 30){
               *m = 2;
               *d = 1;
               }  	      	
           else
              ++*d;
    break;
    
  case 10 : if(*d == 31){
               *m = 2;
               *d = 1;
               }  	      	
           else
              ++*d;
    break;
    
  case 11 : if(*d == 30){
               *m = 2;
               *d = 1;
               }  	      	
           else
              ++*d;
    break;
    
  case 12 : if(*d == 31){
               --*y;
               *m = 1;
               *d = 1;
               }  	      	
           else
              ++*d;
    break;
  }
}



int main(void)
{
  int ya,ma,da;
  int yy,mm,dd;

  puts("今日の日付を入力してください。");
  printf("年："); scanf("%d",&ya);
  printf("月："); scanf("%d",&ma);
  printf("日："); scanf("%d",&da);

  yy = ya;
  mm = ma;
  dd = da;
  
  decrement_date(&ya,&ma,&da);
  printf("昨日の日付は%d年%d月%d日です。\n",ya,ma,da);

  ya = yy;
  ma = mm;
  da = dd;
  
  increment_date(&ya,&ma,&da);
  printf("明日の日付は%d年%d月%d日です。\n",ya,ma,da);

  return 0;
}
