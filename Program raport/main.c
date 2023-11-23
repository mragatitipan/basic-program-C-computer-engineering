#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf ("*************************************\n");
    printf ("\n Nama Saya : Muhammad Raga Titipan   *\n");
    printf ("\n NIM : 1103194185                    *\n");
    printf ("\n Kelas : TK-43-04                    *\n");

    int nilai,data;
    char indeks;
    char status[20];

    printf(" \n masukkan nilai = ");
    scanf("%d",&nilai);
    switch (nilai) {
    case 81 ... 100 :
        indeks='A';
        strcpy(status,"bagus");
        printf("Nilai = %d Indeks = %c Status = %s",nilai,indeks,status);
        break;

    case 61 ... 80 :
        indeks='B';
        strcpy(status,"baik");
        printf("Nilai = %d Indeks = %c Status = %s",nilai,indeks,status);
        break;

    case 40 ... 60 :
        indeks='C';
        strcpy(status,"cukup");
        printf("Nilai = %d Indeks = %c Status = %s",nilai,indeks,status);
        break;

    default :
        indeks='E';
        strcpy(status,"Tidak Lulus");
        printf("Nilai = %d Indeks = %c Status = %s",nilai,indeks,status);
        break;
    }

    return 0;
}
