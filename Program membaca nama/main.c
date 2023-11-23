#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nomor ;
    char nama [20], alamat [40], kelas [10];
    char jns_kel ;
    printf("masukan Nomor = ");
    scanf("%d",&nomor);
    fflush(stdin);
    printf("masukan Nama = ");
    fgets(nama,20,stdin);
    fflush(stdin);
    printf("masukan jns_kel = ");
    scanf("%c",&jns_kel);
    fflush(stdin);
    printf("masukan alamat=");
    fgets(alamat,40,stdin);
    strcpy(kelas,"TK-43-04");
    printf("nomor=%d nama=%s jns_kel=%c alamat=%s kelas=%s",nomor,nama,jns_kel,alamat,kelas);



    return 0;
}
