#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,b=10,c;
    float X,Y=10.5;
    char ch1,ch2='a',str1[10],str2[10],str[10]="TelU";

    A=b+10;
    c=A;
    A=b;
    b=c;
    printf("a=%d b=%d",A,b);
    return 0;
}
