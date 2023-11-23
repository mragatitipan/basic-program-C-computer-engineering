#include <stdio.h>
#include <stdlib.h>
int main(){
int i=0,semua=0;
    struct namabuah {
    int kode;
    char Nama[20];
    int jumlah;
    int hargasatuan;
    float total;
    } fruit [3] ;

        for(i=0;i<3;i++){
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

        printf("Kode : %d \n",fruit[i].kode);
        printf("Nama : %s",fruit[i].Nama);
        printf("Jumlah : %d \n",fruit[i].jumlah);
        printf("Harga satuan : %d \n",fruit[i].hargasatuan);
        printf("Total : %.2f \n \n",fruit[i].total);

    }
        printf("Harga Total Semua Buah : %d",semua);
    return 0;
}

/*
struct ketBuah {
    int Kode,Jumlah,Hargasatuan;
    float Total;
    char Nama[20];
    }Buah;
    int pencacah=0;
    int kode1,kode2,kode3;
    int harga1,harga2,harga3;
    int jumlah1,jumlah2,jumlah3;
    float total1,total2,total3;
    char nama1[20],nama2[20],nama3[20];
    while(pencacah < 3){
        pencacah++;
        printf("Masukkan kode buah ");
        scanf("%d",&Buah.Kode); fflush(stdin);
        printf("Masukkan nama buah ");
        fgets(Buah.Nama,20,stdin); fflush(stdin);
        printf("Masukkan jumlah buah ");
        scanf("%d",&Buah.Jumlah);
        printf("Masukkan harga satuan buah ");
        scanf("%d",&Buah.Hargasatuan);


        printf("\n \n");
        Buah.Total = Buah.Jumlah * Buah.Hargasatuan;

        switch(pencacah){
        case 1:
            kode1 = Buah.Kode;
            strcpy(nama1,Buah.Nama);
            total1 = Buah.Total;
            harga1 = Buah.Hargasatuan;
            jumlah1 = Buah.Jumlah;
            break;
        case 2:
            kode2 = Buah.Kode;
            strcpy(nama2,Buah.Nama);
            total2 = Buah.Total;
            harga2 = Buah.Hargasatuan;
            jumlah2 = Buah.Jumlah;
            break;
        case 3:
            kode3 = Buah.Kode;
            strcpy(nama3,Buah.Nama);
            total3 = Buah.Total;
            harga3 = Buah.Hargasatuan;
            jumlah3 = Buah.Jumlah;
            break;
        }
    }
    printf("---------------------------------------------------\n");
    printf("Kode : %d|Nama Buah : %s|Harga Satuan : %d|Jumlah buah : %d|Total :%.2f| \n",kode1,nama1,harga1,jumlah1,total1);
    printf("Kode : %d|Nama Buah : %s|Harga Satuan : %d|Jumlah buah : %d|Total :%.2f| \n",kode2,nama2,harga2,jumlah2,total2);
    printf("Kode : %d|Nama Buah : %s|Harga Satuan : %d|Jumlah buah : %d|Total :%.2f| \n",kode3,nama3,harga3,jumlah3,total3);
    printf("---------------------------------------------------\n");
    return 0;
}
*/
