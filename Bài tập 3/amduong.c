#include <stdio.h>

int main(void) {

// khai bao bien
  int a;
// nhap xuat gia tri
  printf("Nhap a = ");
  scanf("%d",&a);
//kiem ra a la + hay -
if(a >= 0){
  printf("%d la so khong am",a);
} else {
  printf("%d la so am",a);
}

  return 0;
}
