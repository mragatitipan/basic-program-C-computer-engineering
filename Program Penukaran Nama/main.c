#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("****************************\n");
    printf("* Nama : Muhamamd Raga Titipan *\n");
    printf("* NIM : 1103194185         *\n");
    printf("* Kelas : TK-43-04         *\n");
    printf("****************************\n");

    char nama_anda[20],nama_teman[20],temp[20];
    printf("Masukkan nama anda ");
    fgets(nama_anda,20,stdin);
    printf("Masukkan nama teman anda ");
    fgets(nama_teman,20,stdin);

    printf("Sebelum ditukar nama anda adalah %s ,sedangkan nama teman anda %s \n ",nama_anda,nama_teman);

    strcpy(temp,nama_anda);
    strcpy(nama_anda,nama_teman);
    strcpy(nama_teman,temp);

    printf("Maka setelah ditukar nama anda adalah %s ,sedangkan nama teman anda %s ",nama_anda,nama_teman);


    return 0;
}
