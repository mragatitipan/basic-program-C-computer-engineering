#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("****************************\n");
    printf("* Nama : Ari Cahya Saputra *\n");
    printf("* NIM : 1103190093         *\n");
    printf("* Kelas : TK-43-04         *\n");
    printf("****************************\n");

    int nim,tanggal_lahir;
    char nama[20],bulan_lahir[15],huruf_terakhir;

    printf("Masukkan NIM anda : ");
    scanf("%d",&nim); fflush(stdin);
    printf("Masukkan nama anda : ");
    fgets(nama,20,stdin); fflush(stdin);
    printf("Masukkan tanggal lahir anda : ");
    scanf("%d",&tanggal_lahir); fflush(stdin);
    printf("Masukkan bulan lahir anda : ");
    fgets(bulan_lahir,15,stdin);
    printf("Masukkan huruf terakhir nama anda : ");
    scanf("%c",&huruf_terakhir); fflush(stdin);

    printf("NIM anda %d ,nama anda %s ,tanggal lahir anda %d ,bulan lahir anda %s,dan huruf terakhir anda %c ",nim,nama,tanggal_lahir,bulan_lahir,huruf_terakhir);

    return 0;
}
