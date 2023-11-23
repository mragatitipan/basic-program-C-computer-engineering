#include <stdio.h>
#include <stdlib.h>

void counting_sort(int a[],int n,int max)
{
    int count[100]={0},i,j;
    for(i=0;i<n;++i){
    count[a[i]]=count[a[i]]+1;
    }
    printf("\nData sesudah diurutkan :");
    for(i=0;i<=max;++i){
    for(j=1;j<=count[i];++j){
    printf("%4d ",i);
        }
    }
}

void BinSearch2(int N, int a[], int cari)
{
    int low,high,idx,mid;
    low=0;
    high=N-1;
    idx=0;
    while ((low<=high) && (idx==0))
    {
    mid=(low+high)/2;
    if (a[mid]==cari)
    idx=mid;
    else if (a[mid]<cari)
    low=mid+1;
    else
    high=mid-1;
    }
    if (idx!=0)
    printf("\nData ditemukan pada indeks : %d",idx);
    else
    printf("\nData tidak ditemukan");
    printf("\nIndeks Akhir : %d\n",high);
    printf("Indeks Awal : %d",low);
}


int main()
{
    int i,N,max=0,min=0;
    int nilai[100];
    int cari,idx,found;
    printf("Masukkan Banyak Data : ");
    scanf("%d",&N);
    printf("\n");
    for(i=0; i<N; i++){
    printf("Data ke-%d : ",i);
    scanf("%d",&nilai[i]);
    if(nilai[i]>max){
    max=nilai[i];
    }
    if(nilai[i]<nilai[i+1])
    min=nilai[i];
    }
    counting_sort(nilai,N,max);
    printf("\n\nMasukkan Data yang dicari : ");
    scanf("%d",&cari);
    BinSearch2(N,nilai,cari);
    printf("\n\nMasukkan Data yang dicari lagi : ");
    scanf("%d",&cari);
    BinSearch2(N,nilai,cari);
    printf("\n");
return 0;
}
