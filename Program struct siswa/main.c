#include <stdio.h>
#include <stdlib.h>

int main()
{

 struct siswa{
        int NIS;
        int UTS;
        int UAS;
        char nama[20];
        float nakhir;

        }sis;
   printf(" Masukan NIS = ");
   scanf("%d",&sis.NIS); fflush(stdin);
   printf(" Masukan Nama Anda = ");
   fgets(sis.nama,20,stdin);
   printf(" Masukan nilai UTS anda = ");
   scanf("%d",&sis.UTS);
   printf(" Masukan nilai UAS anda = ");
   scanf("%d",&sis.UAS);

   sis.nakhir = (0.6*sis.UTS)+(0.4*sis.UAS) ;
   printf(" Nama siswa %s NIS = %d UTS=%d UAS=%d dan nilai akhir nilai %f",sis.nama,sis.NIS,sis.UTS,sis.UTS,sis.nakhir);
    return 0;
}
