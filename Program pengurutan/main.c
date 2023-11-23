#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp,i,j;
    char baik[10] = {'c','b','a','f','e','d','g','j','h','i'};
    printf("Data sebelum diurutkan : \n");
    for (i= 0; i < 10;++i){
        printf("%c \t", baik[i]);
        }
    for(j=0;j<10;++j){
        for(i=0;i<10-1;++i){
            if(baik[i]>baik[i+1]){
                temp = baik[i];
                baik[i]= baik[i+1];
                baik[i+1] = temp;
                }
            }
        }
    printf("\nData sesudah diurutkan : \n");
    for (i= 0; i < 10;++i){
        printf("%c \t", baik[i]);
        }
   printf("\n");
    return 0;
}
