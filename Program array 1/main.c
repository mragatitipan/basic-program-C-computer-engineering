#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" Muhammad Raga Titipan \n");
    printf(" 1103194185/TK-43-04 \n");
    int x[2][3] = { {1, 2, 3,},{4, 5, 6}} ; // INISIALI DATA
    int i,j;
    for (i=0; i<2; i++) {   //FOR YANG PERTAMA
        for(j=0; j<3; j++) {
            printf("%d",x[i][j]); //Mencetak isi array
        }
            printf("\n"); // Mencetak emter pada baris terakhir
    }

    return 0;
}
