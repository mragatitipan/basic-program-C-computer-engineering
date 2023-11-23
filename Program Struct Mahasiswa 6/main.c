#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mahasiswa{
    char nama[25];
    int nim;
    int nilai;
} datatmn, Datateman[10], temp;

FILE *teman;

void hapus_enter(char masukan[50]){
    int panjang_string;
    panjang_string = strlen(masukan)-1;
    masukan[panjang_string] = '\0';
}

void BacaData(int N)
{
    int i;
    teman=fopen("data.txt","w");
    printf("Mengisi Data Teman \n");
    for(i=0; i<N; i++){
    fflush(stdin);
    printf("Masukkan Nama : ");
    fgets(datatmn.nama,50,stdin);
    hapus_enter(datatmn.nama);
    printf("Masukkan NIM : ");
    scanf("%d",&datatmn.nim);
    printf("Masukkan Nilai : ");
    scanf("%d",&datatmn.nilai);
    printf("\n");
    fwrite(&datatmn,sizeof(datatmn),1,teman);
 }
 fclose(teman);
}

void Tampilkan(int N)
{
    int i;
    teman=fopen("data.txt","r");
    for(i=0; i<N; i++){
    fread(&Datateman[i],sizeof(Datateman[i]),1,teman);
    }
    printf("\nTAMPILKAN ARRAY\n");
    for(i=0; i<N; i++){
    printf("Data ke-%d\n",i+1);
    printf("Nama : %s\n",Datateman[i].nama);
    printf("NIM : %d\n",Datateman[i].nim);
    printf("Nilai : %d\n",Datateman[i].nilai);
    printf("\n");
    }
}

void SortingBuble(int N)
{
    int i;
    teman=fopen("data.txt","r");
    int pass,tukar;
    pass=1; tukar=1;
    while(pass<=N-1 && tukar==1){
    tukar=0;
    for(i=1; i<=N-pass; i++){
    if(Datateman[i-1].nama<Datateman[i].nama){
    temp=Datateman[i];
    Datateman[i]=Datateman[i-1];
    Datateman[i-1]=temp;
    tukar=1;
        }
    }
    pass=pass+1;
    }
    printf("\nMENGGUNAKAN BUBLE SORT BERDASARKAN NAMA \n");
    for(i=0; i<N; i++){
    printf("Data ke-%d\n",i+1);
    printf("Nama : %s\n",Datateman[i].nama);
    printf("NIM : %d\n",Datateman[i].nim);
    printf("Nilai : %d\n",Datateman[i].nilai);
    printf("\n");
    }
}


void HitungRata(int N)
{
    int i;
    float rata;
    printf("\nHITUNG RATA-RATA TIAP NAMA\n");
    for(i=0; i<N; i++){
    rata=(float)Datateman[i].nilai;
    printf("Data ke-%d\n",i+1);
    printf("Nama %s memiliki nilai rata-rata %.2f\n",Datateman[i].nama,rata);
    }
}

void SelectionSort(int N)
{
    int i,pass;
    printf("\nSELECTION SORT BERDASARKAN NILAI\n");
    //selection sort algorithm
    for (pass = 0; pass < N; ++pass){
    for (i = pass + 1; i < N; ++i){
    if (Datateman[pass].nilai>Datateman[i].nilai){
    //steps for swapping
    temp = Datateman[pass];
    Datateman[pass] = Datateman[i];
    Datateman[i] = temp;
            }
        }
    }
    for(i=0; i<N; i++){
    printf("Data ke-%d\n",i+1);
    printf("Nama : %s\n",Datateman[i].nama);
    printf("NIM : %d\n",Datateman[i].nim);
    printf("Nilai : %d\n",Datateman[i].nilai);
    printf("\n");
    }
}

void BinSearch2(int N)
{
    int i,cari;
    int low,high,idx,mid;
    low=0;
    high=N-1;
    idx=0;
    printf("CARI NILAI TERNTENTU DENGAN BINARY SEARCH\n");
    printf("\nMasukkan Nilai yang ingin dicari : ");
    scanf("%d",&cari);
    while ((low<=high) && (idx==0))
    {
    mid=(low+high)/2;
    if (Datateman[mid].nilai==cari){
    printf("\nNilai %d ditemukan pada %s dengan NIM %d\n\n",Datateman[mid].nilai,Datateman[mid].nama,Datateman[mid].nim);
    idx=mid;
    break;
    }
    else if (Datateman[mid].nilai<cari)
    low=mid+1;
    else
    high=mid-1;
    }
    if(idx==0)
    printf("\nNilai tidak ditemukan\n\n");
}


int main()
{
    int N;
    printf("Masukkan Jumlah Data : ");
    scanf("%d",&N);
    BacaData(N);
    Tampilkan(N);
    SortingBuble(N);
    HitungRata(N);
    SelectionSort(N);
    BinSearch2(N);

return 0;
}
