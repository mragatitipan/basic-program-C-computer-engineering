#include <stdio.h>
#include <stdlib.h>

int main()
{
   int tinggi,i=0,perulangan,j,ganjil=1;

   printf(" Masukan tinggi : ");
   scanf("%d",&tinggi);
   printf("\n");
   perulangan=tinggi;

   while(i<tinggi){
    for(j=perulangan;j<0;j--)
        printf(" ");
    for(j=0;j<ganjil;j++)
        printf("* ");
    for (j=perulangan;j>0;j--)
        printf("");
    printf("\n");
    i++;
    perulangan--;
    ganjil +=2;
   }
   return 0;
}
