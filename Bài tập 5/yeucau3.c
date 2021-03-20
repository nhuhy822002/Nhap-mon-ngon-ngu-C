//Xay dung ham tim uoc chung lon nhat (UCLN) cua 2 so a va b. Voi a,b nhap tu ban phim.
#include <stdio.h>

int main() {
	int a, b;//khai bao bien
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
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
			
			printf("UCLN cua a va b la %d\n", a);
		}
	 else {
		printf("Nhap a,b: ");
	}
	
	return 0;
}
