#include <stdio.h>
#include <stdlib.h>
#include <string.h>
       struct barang{
    char nama[10];
    char jenis[10];
    int banyak;
    char kualitas;
    int harga;
    int total;
    }Brg[20],temp;

    int total=0,cacah=0;
    int totaljenis=0,cacahjenis=0;
    int i,N;
    float rata;

    FILE *barang;


void input_barang()
{

    printf("Masukkan Banyaknya Barang : ");
    scanf("%d",&N);

    // kecuali harga dan total
    printf("\n");
    for(i=0; i<N; i++){
        fflush(stdin);
        printf("Data Barang ke-%d\n",i+1);
        printf("Masukkan Nama Barang : ");
        gets(Brg[i].nama);
        printf("Masukkan Jenis Barang : ");
        gets(Brg[i].jenis);
        printf("Masukkan Banyak Barang : ");
        scanf("%d",&Brg[i].banyak);
        fflush(stdin);
        printf("Masukkan Kualitas Barang : ");
        scanf("%c",&Brg[i].kualitas);
        printf("\n");
    }
}

void Hitung_total()
{

    for(i=0; i<N; i++){
        if(Brg[i].kualitas=='A' || Brg[i].kualitas=='a'){
            if(strcmp(Brg[i].jenis,"hiasan")==0){
                Brg[i].harga=10000;
                cacahjenis=cacahjenis+1;
            }
            else if(strcmp(Brg[i].jenis,"lain")==0){
                Brg[i].harga=7500;
                cacahjenis=cacahjenis+1;
            }
            cacah=cacah+Brg[i].banyak;
        }
        else if(Brg[i].kualitas=='B' || Brg[i].kualitas=='b'){
            if(strcmp(Brg[i].jenis,"hiasan")==0){
                Brg[i].harga=15000;
                cacahjenis=cacahjenis+1;
            }

            else if(strcmp(Brg[i].jenis,"lain")==0){
                Brg[i].harga=5000;
                cacahjenis=cacahjenis+1;
            }
            cacah=cacah+Brg[i].banyak;
        }
        else{
            Brg[i].harga=2500;
            cacah=cacah+Brg[i].banyak;
        }
        Brg[i].total=Brg[i].banyak*Brg[i].harga;
        total=total+Brg[i].total;
    }
    rata=(float)total/cacah;

}
void tampilkan()
{
        for(i=0; i<N; i++){
        printf("\nData Barang ke-%d\n",i+1);
        printf("Nama Barang : %s\n",Brg[i].nama);
        printf("Jenis Barang : %s\n",Brg[i].jenis);
        printf("Banyak Barang : %d\n",Brg[i].banyak);
        printf("Kualitas Barang : %c\n",Brg[i].kualitas);
        printf("Harga Barang : %d\n",Brg[i].harga);
        printf("Total Barang : %d\n",Brg[i].total);
    }
}
void modifBubleSort()
{
    int i,pass,tukar;
    pass=1; tukar=1;

    while(pass<=N-1 && tukar==1){
        tukar=0;
        for(i=1; i<=N-pass; i++){
                //i-1 lalu i
            if(strcmp(Brg[i-1].jenis,Brg[i].jenis)>0){
                temp=Brg[i];
                Brg[i]=Brg[i-1];
                Brg[i-1]=temp;
                tukar=1;
            }
        }
        pass=pass+1;
    }

}

void nulis_file()
{
    barang=fopen("data_barang.txt","w");
    for(i=0; i<N; i++){
        fwrite(&Brg[i],sizeof(Brg[i]),1,barang);
    }
}
void baca_file()
{
    barang=fopen("data_barang.txt","r");
    for(i=0; i<N; i++){
        fread(&Brg[i],sizeof(Brg[i]),1,barang);
    }
}
int main()
{
    input_barang();
    Hitung_total();
    tampilkan();
    printf("\nRata Barang : %.2f\n",rata);
    modifBubleSort();
    printf("\nURUTAN ARRAY BERDASARKAN JENIS MENGGUNAKAN MODIF BUBBLE SORT");
    tampilkan();
    nulis_file();
    baca_file();
    printf("\nTAMPILKAN ARRAY YANG DISIMPAN DI FILE \n");
    tampilkan();

return 0;
}
