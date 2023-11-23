#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,nilai,N, Nil100=0;
    printf("banyaknya niai ? ");
    scanf("%d",&N);
    i=1;
    while (i<=N) {
       printf("nilai ke-%d",i);
       scanf("%d",&nilai);
       if (nilai==100) Nil100=nil100+1;
       i=i+1;
    }
      printf("banyaknya nilai 100 adalah %d",Nil100);
    return 0;
}
