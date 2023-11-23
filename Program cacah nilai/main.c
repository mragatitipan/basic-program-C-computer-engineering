#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf ("*****************************************\n");
    printf ("\n* Nama Saya : Muhammad Raga Titipan   *\n");
    printf ("\n* NIM       : 1103194185              *\n");
    printf ("\n* Kelas     : TK-43-04                *\n");
/*
     int jumlah_data,Nil100=0,temp;

    printf("\n Masukkan jumlah data anda ");
    scanf("%d",&jumlah_data);
    printf("\n Masukkan data anda satu persatu \n");
    for(int i=0;i < jumlah_data ; i++){
        scanf("%d",&temp);
        if(temp == 100) Nil100 = Nil100 + 1;
    }

    printf("\n Cacah nilai 100 dari %d adalah %d",jumlah_data,Nil100);




    int cacah_suku,hasil=-1;

    printf("\n Masukkan nilai cacah suku ");
    scanf("%d",&cacah_suku);

    for(int i=0;i < cacah_suku;i++){
        hasil = hasil + 2;
        printf("%d  ",hasil);
    }

    */
    int nilai_pertama,nilai_kedua,nilai_ketiga,rata_rata;

    printf("\n Nilai pertama : ");
    scanf("%d",&nilai_pertama);
    printf("\n Nilai kedua   : ");
    scanf("%d",&nilai_kedua);
    printf("\n Nilai ketiga  : ");
    scanf("%d",&nilai_ketiga);

    rata_rata = (nilai_pertama + nilai_kedua + nilai_ketiga)/3;
    printf("\n Rata-rata nilai adalah : %d",rata_rata);

    return 0;
}
