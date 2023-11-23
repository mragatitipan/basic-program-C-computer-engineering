#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf ("*****************************************\n");
    printf ("\n Nama Saya   : Muhammad Raga Titipan  *\n");
    printf ("\n NIM         : 1103194185             *\n");
    printf ("\n Kelas       : TK-43-04               *\n");

    int A,B,C=0,D=0,N,temp;

    printf("berapa banyak anda akan mengulang intruksi ");
    scanf("%d",&N);

    for(int i=0;i < N;i++){
    C=0; D=0;
    printf("masukan variabel untuk mengisi nilai A dan B ");
    scanf("%d %d",&A,&B);

    if(A == B) C = C+A;
    else D = D + B;

    printf("maka nilai C adalah %d dan nilai D adalah %d \n",C,D);
    temp = C; C = D; D = temp;

    printf("sehingga nilai C sekarang adalah %d dan nilai D adalah %d \n",C,D);

    }

    return 0;
}
