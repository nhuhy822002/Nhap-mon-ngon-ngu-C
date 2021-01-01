// Viet chuong trinh in bang cuu chuong ra man hinh

#include <stdio.h>

int main(void){
 // khai bao bien
	int i, j;
// xuat ra man hinh bang cuu chuong
	for (i = 1; i<= 10; i = i + 1) {
	for (j = 1; j<= 10; j++) {
			printf("%c %d x %2d = %3d",179,j,i,i*j);
	}
			printf("%c\n", 179);
	}
return 0;
	
}
