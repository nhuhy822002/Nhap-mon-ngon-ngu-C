#include <stdio.h>

int main(void){
  int tong;
  // tong = 1 + 2+ 3 +...+ 10
  tong = 0;
  tong = tong +1;
  tong = tong +2;
  tong = tong +3;
  tong = tong +4;
  tong = tong +5;
  tong = tong +6;
  tong = tong +7;
  tong = tong +8;
  tong = tong +9;
  tong = tong +10;
  // vong lap for
  int dem;
  for(dem = 1; dem <= 10; dem++){
    tong = tong + dem;

}
printf("Tong la: %d", tong);
  return 0;
}
