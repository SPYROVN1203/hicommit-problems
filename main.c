#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  switch (n){
    case 1:
      printf("XEP_LOAI_XUAT_SAC");
      break;
    case 2:
      printf("XEP_LOAI_GIOI");
      break;
    case 3:
      printf("XEP_LOAI_KHA");
      break;
    case 4:
      printf("XEP_LOAI_TRUNG_BINH");
      break;
    default:
      printf("KHONG_HOP_LE");
  }
  return 0;
}