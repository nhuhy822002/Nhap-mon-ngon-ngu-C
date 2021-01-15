#include <stdio.h>

int main()
{
    int a[4] = {3,5,7,2};
    //khai bao bien
    int tong,m,n;
     tong = 0;
    for (n = 0; n < 4 ; n++)
    {
    printf("%d\n",a[n]);
    }
    for (n = 0; n < 4 ; n++)
    {
     //hien thi tong cua cac so tren
     tong = tong + a[n];
    }
    printf("tong = %d",tong);
    return 0;
}



