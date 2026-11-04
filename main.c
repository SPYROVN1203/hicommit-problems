#include <stdio.h>

int main() {
  float dtb;
  int drl;
  int hocluc=0,renluyen=0;
  scanf("%f",&dtb);
  scanf("%d",&drl);
  if (dtb >= 9.0) hocluc = 1;
  else if (dtb >= 8.0 && dtb < 9.0) hocluc = 2;
  else if (dtb >= 8.0 && dtb < 8.0) hocluc = 3;
  else hocluc = 4;

  if (drl >= 90) renluyen = 1;
  else if (80 <= drl < 90) renluyen = 2;
  else if (70 <= drl < 80) renluyen = 3;
  else renluyen = 4;

  
  if (hocluc == 1 && renluyen == 1){
    printf("HOC_BONG_XUAT_SAC");
  }
  else if (hocluc == 2 && renluyen <= 2 || hocluc == 1 && renluyen == 2){
    printf("HOC_BONG_GIOI");
  }
  else if (hocluc == 3 && renluyen <= 3 || hocluc == 2 && renluyen == 3 || hocluc == 1 && renluyen == 3){
    printf("HOC_BONG_KHA");
  }
  else{
    printf("KHONG_DAT");
  }
  
  return 0;
}