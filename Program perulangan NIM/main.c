#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n Nama : Muhammad Raga Titipan \n");
    printf("\n NIM : 1103194185  \n");
    printf("\n Kelas : TK-43-04         \n");

    printf("\n Nama : Alvin Anandra B \n");
    printf("\n NIM : 1103190111  \n");
    printf("\n Kelas : TK-43-04         \n");

    /*
    program perulangan_nim
    membaca 2 digit nim terakhir dari 5 orang teman anda kemudian jumlahkan

    Deklarasi
    int dua_digit,jumlah=0,percobaan_ke=1;

    Algoritma

    masukkan 2 digit nim terakhir teman anda, kemudian lakukan hal yang sama kepada 5 teman anda.
    jumlahkan semua kedua digit nim terakhir teman anda
    tampilkan hasil pennjumlahan dua digit nim terakhir dari 5 teman anda

    */

    int dua_digit,jumlah=0,percobaan_ke=1;

    for(int i=0;i<5;i++){
        printf("\n (%d) Masukkan 2 digit NIM terakhir dari lima teman anda ",percobaan_ke);
        scanf("%d",&dua_digit);
        percobaan_ke++;

        jumlah = jumlah + dua_digit;
    }

    printf("\n Maka hasil penjumlahan dua digit NIM terakhir dari lima teman anda adalah %d",jumlah);
    return 0;
}
