/*　自動車の移動　*/

#include<stdio.h>
#include<math.h>

#define sqr(n) ((n) * (n))

typedef struct {
    double x;
    double y;
} Point;

typedef struct {
    Point  pt;
    double fuel;
} Car;


double distance_of(Point pa, Point pb)
{
  return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}


void put_info(Car c)
{
  printf("現在位置：(%.2f,%.2f)\n", c.pt.x, c.pt.y);
  printf("残り燃料：%.2fリットル\n",c.fuel);
}


int move(Car *c, Point dest)
{
  double d = distance_of(c->pt, dest);

  if(d > c->fuel)
    return 0;

  c->pt = dest;
  c->fuel -= d;

  return 1;
}


int main(void)
{
  Car mycar = {{0.0, 0.0}, 90.0};

  while(1){
    int select;
    int how;
    int x,y;
    Point dest;

    put_info(mycar);

    printf("移動しますか【Yes...1 / No...0】：");
    scanf("%d",&select);
    if(select != 1)
      break;

    printf("\n移動先を入力する方法を選んでください。\n");
    printf("【目的地の座標の入力...1 / 移動距離の入力...0】：");
    scanf("%d",&how);
    
    if(how){
      printf("目的地のX座標："); scanf("%lf",&dest.x);
      printf("　　　　Y座標："); scanf("%lf",&dest.y);
      if(!move(&mycar, dest))
	puts("\a燃料不足で移動できません。");
    }

    if(how == 0){
      printf("X軸方向の移動距離："); scanf("%d",&x);
      printf("Y軸方向の移動距離："); scanf("%d",&y);

      dest.x += x;
      dest.y += y;

      if(!move(&mycar, dest))
	puts("\a燃料不足で移動できません。");
    }

  }
  return 0;
}
