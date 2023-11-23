#include <stdio.h>
#include <stdlib.h>

int main()
{
 int semua=0,i,j;

    struct pegawai {
    int no;
    int nik;
    char nama[20];
    int golongan;
    int jam_hadir;
    int gaji;
    }peg[10];

    struct tarifgaji {
    int golongan;
    int gaji_jam;
    int gajipokok;
    char bonus;
    }gaj[4];

    for (i=1;i<4;i++) {
        //printf("Masukkan no = ");
        //scanf("%d",&peg[i].no);
        printf("--- Data Pegawai ke-%d ---\n",i);
        printf("Masukkan NIK Pegawai ke-% : ");
        scanf("%d",&peg[i].nik);
        fflush(stdin);
        printf("Masukkan nama = ");
        fgets(peg[i].nama,20,stdin);
        fflush(stdin);
        printf("Masukkan golongan = ");
        scanf("%d",&peg[i].golongan);
        printf("Masukkan jumlah jam hadir = ");
        scanf("%d",&peg[i].jam_hadir);
        printf("\n \n");
    }

    for (j=1;j<5;j++){
        printf("\n");
        printf("--- Data Golongan ke-%d ---\n",j);
        printf("\nMasukkan golongan   :");
        scanf("%d",&gaj[j].golongan);
        printf("Masukkan Gaji per jam :");
        scanf("%d",&gaj[j].gaji_jam);
        printf("Masukkan Gaji Pokok   : ");
        scanf("%d",&gaj[j].gajipokok);
        fflush(stdin);
        printf("Masukkan Bonus : ");
        scanf("%c",&gaj[j].bonus);
        fflush(stdin);
    }
    for(i=1;i<4;i++){
        for (j=0;j<5;j++)
        if(peg[i].golongan == gaj[j].golongan){
        peg[i].gaji  = gaj[j].gajipokok+(peg[i].jam_hadir*gaj[j].gaji_jam);
        semua=semua+peg[i].gaji;
        if(gaj[j].bonus=='Y' || gaj[j].bonus=='y'){
        peg[i].gaji = peg[i].gaji + 0.5*gaj[j].gajipokok;
          }
        }
    }

    for(i=1;i<4;i++){
        printf("\n");
        printf(" NIK           : %d \n",peg[i].nik);
        printf(" Nama          : %s ",peg[i].nama);
        printf("Golongan      : %d \n",peg[i].golongan);
        printf(" Jam Hadir     : %d \n",peg[i].jam_hadir);
        printf(" Gaji          : %d \n",peg[i].gaji);
    }
    printf("\n");
    printf("Total gaji Semua pegawai : %d \n \n",semua);
}
