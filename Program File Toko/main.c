#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    FILE *pf;
    char kar;
    if((pf=fopen("COBA.TXT","a+"))==NULL)
    {
    printf("file tidak dapat diciptakan!\r\n");
    exit(0);
    }
    printf(" Membaca Isi File : \r\n");
    while((kar=fgetc(pf)) != EOF) //baca kar dari file
    putchar(kar);
    printf("\n\n Masukan karakter input: ");
    while((kar=getchar())!='\n') //baca inputan user
    fputc(kar,pf);
    fclose(pf);

    */
    FILE *toko;
    char nama[20];
    int jumlah,harga;
    printf("Masukkan Nama Barang : ");gets(nama);
    printf("Masukkan Jumlah Barang : ");scanf("%d",&jumlah);
    printf("Masukkan Harga Barang : ");scanf("%d",&harga);

    toko = fopen("Data_toko.txt","w");
    fprintf(toko,"%s#%d#%d",nama,jumlah,harga);
    fclose(toko);

    struct toko{
        char nama[50];
        int jumlah;
        int harga;
    }barang;
    int n=0,i;
    toko = fopen("Data_toko.txt","r");
    while(!feof(toko))
    {
        fscanf(toko,"%[^#]#%d#%d\n",&barang.nama,&barang.jumlah,&barang.harga);
        n++;
    }

    fclose(toko);
    for(i=0;i<n;i++){
        printf("\nNama Barang : %s\n",barang.nama);
        printf("Jumlah Barang : %d\n",barang.jumlah);
        printf("Harga Barang : %d\n",barang.harga);
    }



    return 0;
}
