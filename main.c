#include <stdio.h>

int main() {
  int d,v;
  scanf("%d %d",&d,&v);
  if (d<=0 || v<0) printf("INVALID");
  else if (v>=500000 && d<15) printf("%d",0);
  else if (d>=1 && d<=5) print("%d",15000);
  else if (d>=6 && d<=15) print("%d",25000);
  else if (d>15) print("%d",40000);
  return 0;
}