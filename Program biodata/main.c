#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("---------------BIODATA----------------\n");
    printf("Nama     : Muhammad Raga Titipan\n");
    printf("NIM      : 1103194185\n");
    printf("Kelas    : TK-43-04\n");
    printf("Asal     : Cicadas\n");


    int tahun,umur;
    printf("\nMasukan tahun lahir : ");
    scanf("%d",&tahun);
    umur=2020-tahun;
    printf("\nPerkiraan umur anda : %d \n",umur);

    return 0;
}
