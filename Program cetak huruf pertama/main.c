#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nomor,nim;
    char nama[30];
    char hurufpertama;
    printf(" \n Nama = Muhammad Raga Titipan \n ");
    printf(" \n NIM = 1103194185              \n");
    printf(" \n Kelas = TK-43-04              \n");
    printf(" \n ");
    nomor=5;
    strcpy(nama,"Muhammad Raga Titipan");
    nim=185;
    hurufpertama='m';
    printf("No = %d \n nama= %s \n Nim = %d \n huruf pertama = %c",nomor,nama,nim,hurufpertama);
    return 0;
}
