#include <stdio.h>
#include <stdlib.h>

int main()
{
  //No 1
     for (int i = 1; i <= 4; i++){
        for (int j = 1; j <=4; j++){

            printf("* ");
        }
        printf("\n");
    }
    //No 2

    for (int j = 1; j <=5; j++){
        for (int i=1; i <=5; i++){
            if ((i==3)||(j==3))
                printf("1");
            else printf("*");
        }
        printf("\n");
    }

    //No 3
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
   //No 4
    return 0;
}

