#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*
    int a[100],n;
    int i,j,cari,idx,low,high,mid,temp;
    printf("Jumlah data : ");
    scanf("%d",&n);
    // Input Data
    for(i=0; i<=n-1; i++){
    printf("Data ke-%d : ",i);
    scanf("%d",&a[i]);
    }
    // data diurutkan terlebih dahulu
    // isi bagian dengan sorting
    // Bubble Sort
    for(i=0; i<=n-1; i++){
    for(j=0; j<=n-1-1; j++){
    if(a[j]>a[j+1]){
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
         }
      }
   }
    // Output Setelah diurutkan
    printf("\nSetelah diurutkan\n");
    for(i=0; i<=n-1; i++){
    printf("Data ke-%d : %d\n",i,a[i]);
    }
    // Data yang dicari
    printf("\nData yang dicari : ");
    scanf("%d",&cari);
    // Binary Search Proses
    low=0;
    high=n-1;
    idx=0;while((low<=high) && (idx==0)){
    mid=(int)(low+high)/2;
    if(a[mid]==cari)
    idx=mid;
    else if(a[mid]<cari)
    low=mid+1;
    else
    high=mid-1;
    }
    if(idx!=0)
    printf("\nData ditemukan pada indeks : %d",idx);
    else
    printf("\nData tidak ditemukan");

   // No 2

*/
        // No 3

        int i,n;
    float a[100],cari;
    printf("Jumlah CATAR : ");
    scanf("%d",&n);
    printf("\n");
    for(i=0; i<=n-1; i++){
    printf("Tinggi Badan CATAR ke-%d : ",i);
    scanf("%f",&a[i]);
    }
    printf("\nTinggi badan yang dicari : ");
    scanf("%f",&cari);
// Proses Sequential Search
    i=0;
    while(i<=n-1){
    if(a[i]==cari){
    printf("\nData ditemukan pada indeks : %d\n",i);
    break;
    if(i==n-1){
    printf("\nData tidak ditemukan\n");
            }
        }
    i=i+1;
    }
    return 0;
}
