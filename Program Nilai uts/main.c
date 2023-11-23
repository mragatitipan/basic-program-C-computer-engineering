#include <stdio.h>
#include <stdlib.h>

int main()
{
int nim[10],uts[10],uas[10],akhir[10],i;
                            for(i=0;i<3;i++){
                                printf("\n---Data ke %d---\n",i+1);
                                printf("\n Masukan nim : ");
                                scanf("%d",&nim[i]);
                                printf("\nMasukan uts : ");
                                scanf("%d",&uts[i]);
                                printf("\nMasukan uas : ");
                                scanf("%d",&uas[i]);
                                akhir[i]=(uts[i]+uas[i])/2;
                            }
                            for(i=0;i<3;i++){
                                printf("\n NIM : %d ",nim[i]);
                                printf("\n UTS : %d",uts[i]);
                                printf("\n UAS : %d",uas[i]);
                                printf("\n Nilai akhir : %d",akhir[i]);
                            }
    return 0;
}
