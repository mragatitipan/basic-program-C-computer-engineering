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
