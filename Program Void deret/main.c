#include <stdio.h>
#include <stdlib.h>

    void deret (int i){
    if(i<100){
        if(i%2==1){
            printf("%d\t",i);
        }
        deret (i+1);
    }
}
int main()
{
    int i=1;
    deret(i);
    return 0;
}
