//Co kieu du lieu tra ve (int)
#include <stdio.h>

// khai bao ham sum
int sum(int a,int b,int c);
// khoi ham main 
int main() {
int a,b,c;
printf("Nhap 3 so nguyen tu ban phim:\n");
	printf("a = ");
	scanf("%d",&a);// nhap a

	printf("b = ");
	scanf("%d",&b);// nhap b

	printf("c = ");
	scanf("%d",&c);// nhap c

printf("a + b + c = %d",sum(a,b,c));

  return 0;
}
// khoi dinh nghia ham
int sum(int a,int b,int c){
  return a + b + c;
}


// Khong co kieu du lieu tra ve (void)
#include <stdio.h>

// khai bao ham sum
void sum(int a,int b,int c);
// khoi ham main 
int main() {
int x,y,z;
printf("Nhap 3 so nguyen tu ban phim:\n");
	printf("a = ");
	scanf("%d",&a);// nhap a

	printf("b = ");
	scanf("%d",&b);// nhap b

	printf("c = ");
	scanf("%d",&c);// nhap c

	sum(a,b,c);

  return 0;
}
// khoi dinh nghia ham
void sum(int a,int b,int c){
int d = a + b + c;
printf("a + b + c = %d",d);
   
}
