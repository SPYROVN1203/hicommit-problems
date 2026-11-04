#include <stdio.h>

int main() {
  float dtb;
  int drl;
  scanf("%f",&dtb);
  scanf("%d",&drl);
  if (dtb >= 9.0 && drl >= 90){
    printf("HOC_BONG_XUAT_SAC");
  }
  else if (7.9999999f < dtb < 9.0 && 80 <= drl || dtb >= 9.0 && 80 <= drl < 90){
    printf("HOC_BONG_GIOI");
  }
  else if (7.0 <= dtb < 8.0 && 70 <= drl || 8.0 <= dtb < 9.0 && 70 <= drl < 80 || dtb >= 9.0 && 70 <= drl < 80){
    printf("HOC_BONG_KHA");
  }
  else{
    printf("KHONG_DAT");
  }
  
  return 0;
}