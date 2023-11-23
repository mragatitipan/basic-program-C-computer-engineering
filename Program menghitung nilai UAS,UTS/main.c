#include <stdio.h>
#include <stdlib.h>

int main()
{
   //no 1
    int angka1,angka2;
    printf("Masukkan angka pertama : ");
    scanf("%d",&angka1);
    printf("Masukkan angka kedua : ");
    scanf("%d",&angka2);

    if (angka1 == angka2){
    printf("angka pertama dan angka kedua sama \n");
    }
    else {
    printf("angka pertama dan angka kedua berbeda \n");
    }

    //no 2
    char A;
    printf("Masukkan sebuah huruf :");
    scanf("%c",&A);

    if (A=='a' || A=='i' || A=='u' || A=='e' || A=='o' ){
        printf("%c adalah huruf vokal \n",A);
    }
    else {
        printf("%c adalah huruf konsonan \n",A);
    }

    //no 3
     int a,b,c;
    printf("Masukkan 3 angka : ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b&&a>c)
        printf("Angka yang paling besar = %d \n",a);
    if (b>a&&b>c)
        printf("Angka yang paling besar = %d \n",b);
    if (c>a&&c>b)
        printf("Angka yang paling besar = %d \n",c);


    //no 4

    printf("Masukkan Biodata !");
    printf("\n------------------------------------------------------------------------------------------------------\n");
    char nama[20],kelas[15],jurusan[20];
    char index;
    int nim,nilai;
    printf("Masukkan Nama                            : ");
    fgets(nama,20,stdin);
    fflush(stdin);
    printf("Masukkan Nim                             : ");
    scanf("%d",&nim);
    fflush(stdin);
    printf("Masukkan Kelas                           : ");
    fgets(kelas,15,stdin);
    printf("Masukkan Jurusan                         : ");
    fgets(jurusan,20,stdin);
    fflush(stdin);
    printf("\nMasukkan Nilai Kalkulus                  : ");
    scanf("%d",&nilai);
    switch (nilai) {
        case 80 ... 100 : index = 'A';break;
        case 60 ... 79 : index = 'B';break;
        case 40 ... 59 : index = 'C';break;
        case 10 ... 39 : index = 'D';break;
        default : index = 'E';break;
    }
    printf("\nSELAMAT TERHADAP ANDA DIBAWAH INI :\n");
    printf("\nNama             : %s",nama);
    printf("NIM              : %d\n",nim);
    printf("Kelas            : %s",kelas);
    printf("Jurusan          : %s",jurusan);
    printf("\n ANDA TELAH LULUS KALKULUS DENGAN INDEX :%c \n",index);

    return 0;
}
