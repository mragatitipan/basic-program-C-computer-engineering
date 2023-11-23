#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nim ;
    char nama[20],kelas[10];

    printf(" Nama Saya : ");
    fgets(nama,20,stdin);
    fflush(stdin);
    printf(" Nim : ");
    scanf("%d",&nim);
    fflush(stdin);
    printf(" Kelas : ");
    scanf("%s",kelas);

    printf(" Nama Saya :%s NIM :%d  Kelas :s ");

    return 0;

}
