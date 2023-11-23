#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k;
    printf("---- Program Menampilkan Bentuk Segitiga ----\n");
    printf("\n");

     for(i=1;i<=4;i++){
        for(j=i;j<=4-1;j++){
                printf("  ");
        }
        for(k=1;k<=i;k++){
                printf("* ");
                }
        printf("\n");
        }


    return 0;
}
