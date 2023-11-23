#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct namabuah {
    int kode;
    char Nama[20];
    int jumlah;
    int hargasatuan;
    } fruit ;

    float total;
    int i=0;
    while (i<3){
        printf("\n Masukkan kode buah : ");
        scanf("%d",&fruit.kode);
        fflush(stdin);
        printf("\n Masukkan nama buah : ");
        fgets(fruit.Nama,20,stdin);
        fflush(stdin);
        printf("\n Masukkan jumlah buah : ");
        scanf("%d",&fruit.jumlah);
        printf("\n Masukkan Harga satuan : ");
        scanf("%d",&fruit.hargasatuan);
        total=fruit.jumlah*fruit.hargasatuan;
        printf("\n Kode buah :%d nama buah :%s jumlah :%d harga satuan :%d Total = Rp%.2f \n ",fruit.kode,fruit.Nama,fruit.jumlah,fruit.hargasatuan,total);
        i++;
    }
    return 0;
}
