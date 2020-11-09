#include <stdio.h>

int main()
{
    int x,y,z,hasil;
    printf("Masukkan angka pertama =",&x);
    scanf("%d",&x);
    printf("Masukkan angka kedua =",&y);
    scanf("%d",&y);
    printf("Masukkan angka ketiga =",&z);
    scanf("%d",&z);
    hasil=x*y*z;
    printf("\n hasil perkalian :%d",hasil);
    return 0;
}
