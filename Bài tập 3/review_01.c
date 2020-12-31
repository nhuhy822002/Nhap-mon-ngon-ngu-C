#include <stdio.h>

int main(void) {
//khai bao bien
  int n;
//xuat ra man hinh 
  printf("Nhap n = ");scanf("%d",&n);
//in tu tieng anh ung voi so 1 den 9
if(n == 1){
    printf("One",n);}
  else if(n == 2){
    printf("Two",n);}
  else if(n == 3){
    printf("Three",n);}
  else if(n == 4){
    printf("Four",n);}
  else if(n == 5){
    printf("Five",n);}
  else if(n == 6){
    printf("Six",n);}
  else if(n == 7){
    printf("Seven",n);}
  else if(n == 8){
    printf("Eight",n);}
  else if(n == 9){
    printf("nice",n);}
  else if(n >9){
    printf(" Greater than 9 "); 
  }
  
  return 0;
}
