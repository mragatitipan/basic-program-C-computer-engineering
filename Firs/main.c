#include <stdio.h>
#include <stdlib.h>
int Luas (int panjang,int lebar){
    return panjang*lebar;
}
int Keliling (int panjang,int lebar){
    return 2*(panjang+lebar);
}
int main()
{
   int panjang,lebar,luas,keliling;
   printf(" Masukan panjang : ");
   scanf("%d",&panjang);

   printf(" Masukan Lebar : ");
   scanf("%d",&lebar);
   luas=Luas(panjang,lebar);
   keliling=Keliling(panjang,lebar);
   printf(" Hasil Luas : %d \n",luas);
   printf(" Hasil keliling : %d",keliling);

    return 0;
}
