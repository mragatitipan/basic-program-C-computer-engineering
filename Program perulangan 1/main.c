#include <stdio.h>
#include <stdlib.h>

int main()
{
   int penyebut1,pembilang1,penyebut2,pembilang2;
   int penyebut3,pembilang3;
   printf(" \n Nama = Muhammad Raga Titipan \n ");
   printf(" \n NIM = 1103194185             \n ");
   printf(" \n Kelas = TK-43-04             \n ");
   printf(" \n ");
   printf(" \n input penyebut 1= ");
   scanf("%d",&penyebut1);
   printf(" \n input pembilang 1= ");
   scanf("%d",&pembilang1);
   printf(" \n input penyebut 2= ");
   scanf("%d",&penyebut2);
   printf(" \n input pembilang 2= ");
   scanf("%d",&pembilang2);
   penyebut3=penyebut1*penyebut2;
   pembilang3=pembilang1*pembilang2;
   printf(" \n Hasil = "" %d" "/" "%d" " x " "%d" "/" "%d" " = " "%d" "/" "%d",penyebut1,pembilang1,penyebut2,pembilang2,penyebut3,pembilang3);
    return 0;
}
