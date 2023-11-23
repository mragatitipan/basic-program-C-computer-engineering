#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct barang{
    char nama[10];
    char jenis[10];
    int banyak;
    int kualitas;
    int harga;
    int totaltiap;
    }raga[10],temp;

    int totalsemua=0,cacahsemua=0;
    int totaljen=0,cacahjen=0;

    int i,N;
    float rata;

    FILE *barang;
void input_barang()
{
    printf("Masukkan Banyaknya Barang : ");
    scanf("%d",&N);
    // kecuali harga dan totalmasing
    printf("\n");
    for(i=0; i<N; i++){
        fflush(stdin);
        printf("Data Barang ke-%d\n",i+1);
        printf("Masukkan Nama Barang : ");
        gets(raga[i].nama);
        printf("Masukkan Jenis Barang : ");
        gets(raga[i].jenis);
        printf("Masukkan Banyak Barang : ");
        scanf("%d",&raga[i].banyak);
        fflush(stdin);
        printf("Masukkan Kualitas Barang : ");
        scanf("%d",&raga[i].kualitas);
        printf("\n");
    }
}
void Hitung_total()
{
    char A=0,a;
    char B=0,b;
    char C=0,c;
    for(i=0; i<=N; i++){
       if(raga[i].kualitas== A || raga[i].kualitas==a){
            if(strcmp(raga[i].jenis,"hiasan")==0){
                raga[i].harga=10000;
                totaljen=totaljen+raga[i].harga;
                cacahjen=cacahjen+1;
            }
            else if(strcmp(raga[i].jenis,"lain")==0){
                raga[i].harga=7500;
                totaljen=totaljen+raga[i].harga;
                cacahjen=cacahjen+1;
            }
            cacahsemua=cacahsemua+raga[i].banyak;

        }
        else if(raga[i].kualitas== B || raga[i].kualitas==b){
            if(strcmp(raga[i].jenis,"hiasan")==0){
                raga[i].harga=15000;
                totaljen=totaljen+raga[i].harga;
                cacahjen=cacahjen+1;
            }
            else if(strcmp(raga[i].jenis,"lain")==0){
                raga[i].harga=5000;
                totaljen=totaljen+raga[i].harga;
                cacahjen=cacahjen+1;
            }
            cacahsemua=cacahsemua+raga[i].banyak;

        }
        else if(raga[i].kualitas == C || raga[i].kualitas==c){
            if(strcmp(raga[i].jenis,"hiasan")==0){
                raga[i].harga=5000;
                totaljen=totaljen+raga[i].harga;
                cacahjen=cacahjen+1;
            }
            else if(strcmp(raga[i].jenis,"lain")==0){
                raga[i].harga=2500;
                totaljen=totaljen+raga[i].harga;
                cacahjen=cacahjen+1;
            }
            cacahsemua=cacahsemua+raga[i].banyak;

        }
        raga[i].totaltiap=raga[i].banyak*raga[i].harga;
        totalsemua=totalsemua+raga[i].totaltiap;
    }
    rata=(float)totalsemua/cacahsemua;
}
void tampilkan()
{
        for(i=0; i<N; i++){
        printf("\nData Barang ke-%d\n",i+1);
        printf("Nama Barang : %s\n",raga[i].nama);
        printf("Jenis Barang : %s\n",raga[i].jenis);
        printf("Banyak Barang : %d\n",raga[i].banyak);
        printf("Kualitas Barang : %d\n",raga[i].kualitas);
        printf("Harga Barang : %d\n",raga[i].harga);
        printf("Total Barang : %d\n",raga[i].totaltiap);
    }
}

void modifBubleSort()
{
    int i,pass,tukar;
    pass=1; tukar=1;

    while(pass<=N-1 && tukar==1){
        tukar=0;
        for(i=1; i<=N-pass; i++){

            if(strcmp(raga[i-1].jenis,raga[i].jenis)>0){
                temp=raga[i];
                raga[i]=raga[i-1];
                raga[i-1]=temp;
                tukar=1;
            }
        }
        pass=pass+1;
    }
}
void SelectionSort()
{
    int i,pass;
    N=5;
    //selection sort algorithm
    for (pass = 0; pass < N; ++pass){
    for (i = pass + 1; i < N; ++i){
    if (raga[pass].kualitas>raga[i].kualitas){
    //steps for swapping
    temp = raga[pass];
    raga[pass] = raga[i];
    raga[i] = temp;
            }
        }
    }
}

void nulis_file()
{
    barang=fopen("data_barang.txt","w");
    for(i=0; i<N; i++){
        fwrite(&raga[i],sizeof(raga[i]),1,barang);
    }
}
void baca_file()
{
    barang=fopen("data_barang.txt","r");
    for(i=0; i<N; i++){
        fread(&raga[i],sizeof(raga[i]),1,barang);
    }
}
int main()
{
    printf("Nama   : Muhammad Raga Titipan\n");
    printf("NIM    : 1103194185\n");
    printf("Kelas  : TK-43-04\n");
    printf("\n");
    input_barang();
    Hitung_total();
    tampilkan();
    printf("\nRata Barang : %.2f\n",rata);
    modifBubleSort();
    printf("\nPENGURUTAN ARRAY BERDASARKAN JENIS DENGAN MODIF BUBBLE SORT");
    tampilkan();
    printf("\nTotal Jenis Barang : %d\n",totaljen);
    printf("\nCacah Jenis Barang : %d\n",cacahjen);
    SelectionSort();
    printf("\nPENGURUTAN ARRAY BERDASARKAN KUALITAS DENGAN SELECTION SORT");
    tampilkan();
    nulis_file();
    baca_file();
    printf("\nTAMPILKAN ARRAY YANG DISIMPAN DI FILE \n");
    tampilkan();
    printf("\nTotal Kualitas Barang : %d\n",totaljen);
    printf("\nCacah Kualitas Barang : %d\n",cacahjen);
    return 0;
}


