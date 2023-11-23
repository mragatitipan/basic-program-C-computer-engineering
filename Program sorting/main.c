#include <stdio.h>
#include <stdlib.h>

int main()
{
 char LAB_SK[6][10] = {"SEA\n","EVCONN\n","MAGICS\n","I-SMILE\n","SECULAB\n","RNEST\n"},cari[10],temp[10];
    int i,j,low,mid,high=0,idx=0;
    //Sorting
    for(i=0;i<6;i++) printf("\t%4s",LAB_SK[i]);
    printf("\n---------------------DATA AWAL-----------------------------\n");
    for(i=0;i<6;i++){
        for(j=0;j<5;j++){
            if((strcmp(LAB_SK[j+1],LAB_SK[j]))<0){
                strcpy(temp,LAB_SK[j+1]);
                strcpy(LAB_SK[j+1],LAB_SK[j]);
                strcpy(LAB_SK[j],temp);
            }
        }
    }
    for(i=0;i<6;i++) printf("\t%4s",LAB_SK[i]);
    printf("\n");
    printf("\n-----------------SORTING SELESAI-----------------\n");
    low = 0;
    high = 5;
    printf("Masukkan Lab yang dicari : ");
    fgets(cari,10,stdin);
    while(low<=high && idx==0){
        mid = (low+high)/2;
        if (mid==0){
            idx=0;
            break;
        }
        else if(strcmp(cari,LAB_SK[mid])==0) idx = mid;
        else if(strcmp(cari,LAB_SK[mid])>0) low = mid+1;
        else high = mid-1;

        }
    if (idx!=0)
    printf("Maka Lab yang dicari ada di indeks ke-%d\n",idx);
    else
    printf("Lab tidak ditemukan\n");
}
