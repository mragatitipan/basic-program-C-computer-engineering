#include <stdio.h>
#include <stdlib.h>

int main()
{
        int i,n;
        float a[100],cari;
    printf("Jumlah CATAR : ");
    scanf("%d",&n);
    printf("\n");
    for(i=1; i<=n; i++){
    printf("Tinggi Badan CATAR ke-%d : ",i);
    scanf("%f",&a[i]);
    }
    printf("\nTinggi badan yang dicari : ");
    scanf("%f",&cari);

    // Proses Sequential Search

    i=0;
    while(i<=n && a[i]!=cari){
            i=i+1;
    if(a[i]==cari){
    printf("\nData ditemukan pada indeks : %d",i);
    break;
            if(i==n-1){
            printf("\nData tidak ditemukan");
            }
                }
                    }

            return 0;
}
