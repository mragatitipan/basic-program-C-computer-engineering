#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("****************************\n");
    printf("* Nama : Muhammad Raga Titipan *\n");
    printf("* NIM : 1103194185         *\n");
    printf("* Kelas : TK-43-04         *\n");
    printf("****************************\n");

    int dua_digit,jumlah=0,percobaan_ke=1;

    for(int i=0;i<5;i++){
        printf(" (%d) Masukkan 2 digit terakhir dari lima NIM teman anda ",percobaan_ke);
        scanf("%d",&dua_digit);
        percobaan_ke++;

        jumlah = jumlah + dua_digit;
    }

    printf("Maka hasil penjumlahan dua digit dari lima teman anda adalah %d",jumlah);
    return 0;
}
