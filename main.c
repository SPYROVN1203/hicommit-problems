#include <stdio.h>

int main() {
  int t;
  scanf("%d",&t);
  if (t<15) printf("LANH");
  if (15<t && t<25) printf("MAT");
  if (25<t && t<35) printf("NONG");
  if (t<35) printf("RAT_NONG");
  return 0;
}