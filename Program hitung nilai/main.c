#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf ("*****************************************\n");
    printf ("\n Nama Saya   : Muhammad Raga Titipan  *\n");
    printf ("\n NIM         : 1103194185             *\n");
    printf ("\n Kelas       : TK-43-04               *\n");

   char nim[5]; char indeks; int UTS,UAS,nilai_akhir,jumlah_data,data,i=0;
    printf("\n Masukkan jumlah data nilai : ");
    scanf("%d",&jumlah_data);

    while (i<jumlah_data){
    i++;
    fflush(stdin);
    printf("\n Masukkan Nim data ke-1 : ");
    scanf("%s",&nim);

    fflush(stdin);
    printf(" \n Masukkan Nilai UTS : ");
    scanf("%d",&UTS);
    printf("\n Masukkan Nilai UAS : ");
    scanf("%d",&UAS);
    nilai_akhir=((50*UTS)/100)+((50*UAS)/100);

    switch(nilai_akhir){
    case 81 ... 100:
        indeks='A';
        break;
    case 51 ... 80:
        indeks='C';
        break;
    case 0 ... 50:
        indeks='E';
        break;
    default:
        printf("\n Maaaf, format tidak sesuai \n");
    }
    printf("\n Nim %s memiliki nilai akhir %d dengan indeks adalah %c \n",nim,nilai_akhir,indeks);
    }
    return 0;
}
