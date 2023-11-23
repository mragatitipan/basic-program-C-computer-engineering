#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,semua=0;
    struct namabuah {
    int kode;
    char Nama[20];
    int jumlah;
    int hargasatuan;
    float total;
    } fruit[4] ;

    while (i<=3){
        printf("\n----- Buah ke-%d -----\n",i);
        printf("Masukkan kode buah : ");
        scanf("%d",&fruit[i].kode);
        printf("Masukkan nama buah : ");
        fflush(stdin);
        fgets(fruit[i].Nama,20,stdin);
        printf("Masukkan jumlah buah : ");
        scanf("%d",&fruit[i].jumlah);
        printf("Masukkan Harga satuan : ");
        scanf("%d",&fruit[i].hargasatuan);

        fruit[i].total=fruit[i].jumlah*fruit[i].hargasatuan;
        semua=semua+fruit[i].total;
        i++;
    }
    i=1;
    while(i <= 3){
        printf("\nKode : %d \n",fruit[i].kode);
        printf("Nama : %s",fruit[i].Nama);
        printf("Jumlah : %d \n",fruit[i].jumlah);
        printf("Harga satuan : %d \n",fruit[i].hargasatuan);
        printf("Total : %.2f \n \n",fruit[i].total);
        i++;
    }
        printf("\n");
        printf("Harga Total Semua Buah : %d",semua);
    return 0;
}
