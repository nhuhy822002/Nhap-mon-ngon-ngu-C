//Xay dung ham tim uoc chung lon nhat (UCLN) cua 2 so a va b. Voi a,b nhap tu ban phim.
#include <stdio.h>

int main() {
	int a, b;//khai bao bien
	printf("Nhap a: ");
	scanf("%d", &a);//nhap a tu ban phim
	printf("Nhap b: ");
	scanf("%d", &b);//nhap b tu ban phim
	
	if(a >= 0 && b >= 0) {
		if(a == 0 && b == 0) {
			printf("Khong ton tai UCLN\n");
		} else if(a == 0 || b == 0) {

		} else {// a, b 
			int bc = a * b;
			
			while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}

			}
			
			printf("UCLN cua a va b la %d\n", a);//hien thi ket qua
		}
	 else {
		printf("Nhap a,b: ");
	}
	
	return 0;
}
