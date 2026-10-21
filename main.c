#include <stdio.h>

int main() {
  int d,v;
  scanf("%d %d",&d,&v);
  if (d<=0 || v<0) printf("INVALID");
  else if (d>=1 && d<=5) printf("%d",15000);
  else if (v<500000 && d>=6 && d<=15) printf("%d",25000);
  else if (d>15) printf("%d",40000);
  else printf("%d",0);
  return 0;
}