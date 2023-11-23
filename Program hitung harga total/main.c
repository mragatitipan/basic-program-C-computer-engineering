#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nomor,harga,jumlah,total_harga ;
    char namahewan[20],kualitas;
    printf(" \n Nama= Muhammad Raga Titipan \n ");
    printf(" \n NIM = 1103194185            \n");
    printf(" \n Kelas= TK-43-04              \n");
    printf(" \n Nomor= ");
    scanf("%d",&nomor);
    fflush(stdin);
    printf("Nama Hewan= ");
    fgets(namahewan,20,stdin);
    printf("harga = ");
    scanf("%d",&harga);
    printf("jumlah = ");
    scanf("%d",&jumlah);
    fflush(stdin);
    printf("kualitas A/B = ");
    scanf("%c",&kualitas);
    total_harga=harga*jumlah;
    printf("nomor=%d nama hewan=%s harga=%d jumlah = %d kualitas = %c total harga = %d",nomor,namahewan,harga,jumlah,kualitas,total_harga);
    return 0;
}
