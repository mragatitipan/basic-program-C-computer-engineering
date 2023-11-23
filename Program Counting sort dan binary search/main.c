#include <stdio.h>
#include <stdlib.h>
/*
void counting_sort(int a[],int n,int max)
{
    int count[100]={0},i,j;
    for(i=0;i<n;++i){
    count[a[i]]=count[a[i]]+1;
    }
    printf("\nData sesudah diurutkan :");
    for(i=0;i<=max;++i){
    for(j=1;j<=count[i];++j){
    printf("%4d ",i);
        }
    }
}

void BinSearch2(int N, int a[], int cari)
{
    int low,high,idx,mid;
    low=0;
    high=N-1;
    idx=0;
    while ((low<=high) && (idx==0))
    {
    mid=(low+high)/2;
    if (a[mid]==cari)
    idx=mid;
    else if (a[mid]<cari)
    low=mid+1;
    else
    high=mid-1;
    }
    if (idx!=0)
    printf("\nData ditemukan pada indeks : %d",idx);
    else
    printf("\nData tidak ditemukan");
    printf("\nIndeks Akhir : %d\n",high);
    printf("Indeks Awal : %d",low);
}


int main()
{
    int i,N,max=0,min=0;
    int nilai[100];
    int cari,idx,found;
    printf("Masukkan Banyak Data : ");
    scanf("%d",&N);
    printf("\n");
    for(i=0; i<N; i++){
    printf("Data ke-%d : ",i);
    scanf("%d",&nilai[i]);
    if(nilai[i]>max){
    max=nilai[i];
    }
    if(nilai[i]<nilai[i+1])
    min=nilai[i];
    }
    counting_sort(nilai,N,max);
    printf("\n\nMasukkan Data yang dicari : ");
    scanf("%d",&cari);
    BinSearch2(N,nilai,cari);
    printf("\n\nMasukkan Data yang dicari lagi : ");
    scanf("%d",&cari);
    BinSearch2(N,nilai,cari);
    printf("\n");
return 0;
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
    printf("Masukkan Nama : ");
    gets(Mhs[i].nama);
    printf("Masukkan NIM : ");
    scanf("%d",&Mhs[i].nim);
    printf("Masukkan Nilai : ");
    scanf("%d",&Mhs[i].nilai);
    }
    printf("\nSEBELUM DIURUTKAN : \n");
    for(i=0; i<N; i++){
    printf("%s\t%d\t%d\n",Mhs[i].nama,Mhs[i].nim,Mhs[i].nilai);
    }
    printf("\nURUTAN DENGAN MODIFIED BUBLE SORT MENURUT NIM : \n");
    modifBubleSort(N);
    for(i=0; i<N; i++){
    printf("%s\t%d\t%d\n",Mhs[i].nama,Mhs[i].nim,Mhs[i].nilai);
    }
    printf("\nURUTAN DENGAN SELECTION SORT MENURUT NAMA : \n");
    SelectionSort(N);
    for(i=0; i<N; i++){
    printf("%s\t%d\t%d\n",Mhs[i].nama,Mhs[i].nim,Mhs[i].nilai);
    }

return 0;
}

