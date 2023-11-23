#include <stdio.h>
#include <stdlib.h>

int main()
{

    int Rupiah;
    float USD,YEN,WON;

    printf("\n ^_^ Masukkan Jumlah Mata Uang = Rp. ");
    scanf("%d",&Rupiah);

    USD=(float)Rupiah/13000;
    YEN=(float)Rupiah/2000;
    WON=(float)Rupiah/11709;

    printf("\nUSD = $%.2f ",USD);
    printf("\nYEN = %.2f IDR ",YEN);
    printf("\nWON = %.2f KRW",WON);
    printf("\n ^_^ Konversi Mata Uang Asing Berhasil ^_^ ");

    return 0;
}
