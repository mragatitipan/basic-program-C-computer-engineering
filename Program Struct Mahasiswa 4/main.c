#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
   int i=0;
   struct mahasiswa{
   char nama[20];
   int nim; float nilai;};
   struct mahasiswa mhs[3];
   // Mengisi data mhs
   for (i=0;i<3;i++){
    fgets(mhs[i].nama,20,stdin);
    scanf("%d",&mhs[i].nim);
    scanf("%d",&mhs[i].nilai);
    fflush(stdin);}
    // Mencetak data mhs
    for(i=0;i<3;i++)
        printf("%s %d %f\n",mhs[i].nama,mhs[i].nim,mhs[i].nilai);
*/

int i=0,semua=0;
    struct namabuah {
    int kode;
    char Nama[20];
    int jumlah;
    int hargasatuan;
    float total;
    } fruit [3] ;

    for (i=0;i<3;i++){
        printf("\n----- Buah ke-%d -----\n",i);
        printf("Masukkan kode buah : ");
        scanf("%d",&fruit[i].kode);
        printf("Masukkan nama buah : ");
        fflush(stdin);
        fgets(fruit[i].Nama,20,stdin);
        printf("Masukkan jumlah buah : ");
        scanf("%d",&fruit[i].jumlah);
        printf("Masukkan Harga satuan : ");
        scanf("%d",&fruit[i].hargasatuan);

        fruit[i].total=fruit[i].jumlah*fruit[i].hargasatuan;
        semua=semua+fruit[i].total;

        printf("Kode : %d \n",fruit[i].kode);
        printf("Nama : %s",fruit[i].Nama);
        printf("Jumlah : %d \n",fruit[i].jumlah);
        printf("Harga satuan : %d \n",fruit[i].hargasatuan);
        printf("Total : %.2f \n \n",fruit[i].total);

    }
        printf("Harga Total Semua Buah : %d",semua);
    return 0;
}
