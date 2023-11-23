#include <stdio.h>
#include <stdlib.h>

int main()
{
    int semua=0;
   struct pegawai{
    int no;
    int nik;
    int jam_hadir;
    int gol;
    int gaji;
    char nama[20];
   }peg[10];
    struct tarifgaji{
     int gaji;
     int gol;
     int jam_hadir;
    }gaji[4];
     int i,j;

    for(i=0; i<3; i++){
       printf(" Masukan No : ");
       scanf("%d",&peg[i].no);
        printf("Masukan NIK : ");
        scanf("%d",&peg[i].nik);
        fflush(stdin);
        printf("Masukan Nama anda : ");
        fgets(peg[i].nama,20,stdin);
        fflush(stdin);
        printf("Golongan : ");
        scanf("%d",&peg[i].gol);
        printf(" Jam Hadir anda : ");
        scanf("%d",&peg[i].jam_hadir);
    }
    for (int j=0; j<4; j++){
        printf(" Golongan :");
        scanf("%d",&gaji[j].gol);
        printf("gaji anda :  ");
        scanf("%d",&gaji[j].gaji);
    }

    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++)
        if(peg[i].gol==gaji[j].gol)
        peg[i].gaji=peg[i].jam_hadir*gaji[j].gaji;
         semua=semua+peg[i].gaji;
            }
            for(int i=0;i<3;i++){
                printf("\n Nik : %d ",peg[i].nik);
                printf("\n No : %d",peg[i].no);
                printf("\n Nama : %s ",peg[i].nama);
                printf("\n Golongan : %d ",peg[i].gol);
                printf("\n Jam hadir : %d ",peg[i].jam_hadir);
                printf(" Gaji : %d",peg[i].gaji);

            }
                printf("Total semua= %d ",semua);

    return 0;
}
