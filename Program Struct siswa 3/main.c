#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct siswa{
    char nama[50];
    int nim;
    int skslulus;
}datasis, sis[10];

struct nilai{
    int nim;
    char mk[10];
    int sks;
    char indeks;
}datanil, nil[10];

FILE *fsis, *fnil;

void hapus_enter_penganggu_kedamaian(char masukan[50]){
    int panjang_string;
    panjang_string = strlen(masukan)-1;
    masukan[panjang_string] = '\0';
}

void BacaData(int N, int M)
{
    fsis=fopen("siswa.txt","w");
    fnil=fopen("nilai.txt","w");
    int i,j;
    printf("Mengisi Data Siswa \n");
    for(i=0; i<N; i++){
        printf("Masukkan Nama : ");
        fgets(datasis.nama,50,stdin);
        hapus_enter_penganggu_kedamaian(datasis.nama);
        printf("Masukkan NIM : ");
        scanf("%d",&datasis.nim);
        fflush(stdin);
        printf("\n");
        fwrite(&datasis,sizeof(datasis),1,fsis);
    }
    printf("\nMengisi Data Nilai\n");
    for(i=0; i<M; i++){
        printf("Masukkan NIM : ");
        scanf("%d",&datanil.nim);
        fflush(stdin);
        printf("Masukkan Nama MK : ");
        fgets(datanil.mk,10,stdin);
        printf("Masukkan sks mk : ");
        scanf("%d",&datanil.sks);
        fflush(stdin);
        printf("Masukkan Indeks : ");
        scanf("%c",&datanil.indeks);
        printf("\n");
        fwrite(&datanil,sizeof(datanil),1,fnil);
    }
    fclose(fsis);
    fclose(fnil);
}

void isisks(int N, int M)
{
    int totalsks;
    fsis=fopen("siswa.txt","r");
    fnil=fopen("nilai.txt","r");
    int i,j;
    // instruksi untuk membaca file "siswa.txt" ke array sis[]
    for(i=0; i<N; i++){
        fread(&sis[i],sizeof(sis[i]),1,fsis);
    }
    // instruksi untuk membaca file "nilai.txt" ke array nil[]
    for(j=0; j<M; j++){
        fread(&nil[j],sizeof(nil[j]),1,fnil);
    }
    fclose(fsis);
    fclose(fnil);
    fsis=fopen("siswa.txt","w");

    for(i=0; i<N; i++){
        totalsks=0;
        for(j=0; j<M; j++)
            if(sis[i].nim==nil[j].nim)
                if(nil[j].indeks<'E')
                    totalsks=totalsks+nil[j].sks;
    sis[i].skslulus=totalsks;
    fwrite(&sis[i],sizeof(sis[i]),1,fsis); // tulis ke file siswa
    }
    fclose(fsis);
}

void TampilSiswa(int N)
{
    int i;
    fsis=fopen("siswa.txt","r");

    for(i=0; i<N; i++){
        fread(&sis[i],sizeof(sis[i]),1,fsis);
        printf("Siswa %s dengan nim %d skslulus %d \n",sis[i].nama,sis[i].nim,sis[i].skslulus);
    }
}


int main()
{
    int n,m;
    printf("Jumlah Data Siswa : ");
    scanf("%d",&n);
    printf("Jumlah Data Nilai : ");
    scanf("%d",&m);
    printf("\n\n");
    fflush(stdin);
    BacaData(n,m);
    isisks(n,m);
    TampilSiswa(n);

return 0;
}
