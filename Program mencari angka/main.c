/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
int cari,hasil,i,n,j,idx;
int y[10],temp;

printf("Muhammad Raga Titipan\n");
printf("--1103194185--\n");
printf("---TK-43-04---\n");
printf("\n");
printf("Masukkan banyak data : "); scanf("%d",&n);

printf("Input data ");
printf("\n");
i=0;
while(i<n)
    {
        printf("data ke-%d = ",i+1); scanf("%d",&y[i]);
        i++;
    }

printf("Masukkan angka yang dicari : "); scanf("%d",&cari);
hasil = indeks(cari,n,y);

for(i=0; i<(n-1); i++)
    {
        idx=i;
        for(j=i+1; j<n; j++)
        {
            if(y[j]<y[idx])
            {
                idx=j;
            }
        }
        temp=y[i];
        y[i]=y[idx];
        y[idx]=temp;
    }

printf("\nSetelah Sorting    : ");


for(i=0; i<n; i++)
    {
        printf("%d ", y[i]);
    }

    if(hasil==-1)
    {
        printf("\n Data tidak ditemukan \n");
    }
    else
    {
        printf("\n=======================================\n");
        printf("Angka di cari %d ada di indeks ke %d ",cari,hasil+1);
        printf("\n=======================================\n");
    }

    return 0;
}

int indeks(int cari, int n, int angka[])
{

    int i,awal,tengah,akhir,ketemu;

    akhir=n-1;
    awal=0;
    ketemu=-1;
    i=0;

    while(ketemu==-1 && i < n)
    {
        tengah=(awal+akhir)/2;

        if(angka[tengah]==cari)
        {
            ketemu=tengah;
        }
        else
        {
            if(angka[tengah]<cari)
            {
                awal=tengah+1;
            }
            else
            {
                akhir=tengah-1;
            }
            i++;
        }
        ketemu++;
    }
}

*/
#include <stdio.h>
#include <stdlib.h>

 struct Mahasiswa{
    char nama[30];
    int nim;
    int nilai;
    char indeks;
 };
    struct Mahasiswa Mhs[10],temp;

void modifBubleSort(int N)
{
    int i,pass,tukar;
    pass=1; tukar=1;
    while(pass<=N-1 && tukar==1){
    tukar=0;
    for(i=1; i<=N-pass; i++){
    if(Mhs[i-1].nim>Mhs[i].nim){
    temp=Mhs[i];
    Mhs[i]=Mhs[i-1];
    Mhs[i-1]=temp;
    tukar=1;
        }
    }
    pass=pass+1;
    }
}

void SelectionSort(int N)
{
    int i,pass;
 //selection sort algorithm
    for (pass = 0; pass < N; ++pass){
    for (i = pass + 1; i < N; ++i){
    if (strcmp(Mhs[pass].nama,Mhs[i].nama)<0){
 //steps for swapping
    temp = Mhs[pass];
    Mhs[pass] = Mhs[i];
    Mhs[i] = temp;
            }
        }
    }
}


int main()
{
    int i,N;
    printf("Masukkan Banyak Data : ");
    scanf("%d",&N);
    for(i=0; i<N; i++){
    fflush(stdin);
    printf("\nData ke-%d\n",i);
    printf("Masukkan Nama lengkap : ");
    gets(Mhs[i].nama);
    printf("Masukkan NIM : ");
    scanf("%d",&Mhs[i].nim);
    printf("Masukkan Nilai UAS : ");
    scanf("%d",&Mhs[i].nilai);
    }
    printf("\nBEFORE DIURUTKAN : \n");
    for(i=0; i<N; i++){
    printf("%s\t%d\t%d\n",Mhs[i].nama,Mhs[i].nim,Mhs[i].nilai);
    }
    printf("\nURUTAN DENGAN MODIFIED BUBLE SORT -> NIM : \n");
    modifBubleSort(N);
    for(i=0; i<N; i++){
    printf("%s\t%d\t%d\n",Mhs[i].nama,Mhs[i].nim,Mhs[i].nilai);
    }
    printf("\nURUTAN DENGAN SELECTION SORT -> NAMA : \n");
    SelectionSort(N);
    for(i=0; i<N; i++){
    printf("%s\t%d\t%d\n",Mhs[i].nama,Mhs[i].nim,Mhs[i].nilai);
    }

return 0;
}
