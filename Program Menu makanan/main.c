#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* Nomor 1
   int data,tambah=0;

   printf("\n masukan data = ");
   scanf("%d",&data);

   if (data<10) {
    tambah=data+10;
   }else {
   data=data-20;
   }
   printf("\n data=%d tambah=%d",data,tambah);
*/

    int uang,menu,harga,kembalian;
    char nama[20];
    printf("\n masukan uang = ");
    scanf("%d",&uang);
    printf("\n masukan menu 1.ayam goreng 2.nasi padang 3.nasi rames : ");
    scanf("%d",&menu);
    switch (menu) {
    case 1 : strcpy(nama,"ayam goreng");
             harga=10000;
             break;
    case 2 : strcpy(nama,"nasi padang");
             harga=15000;
             break;
    default : strcpy(nama,"nasi rames");
              harga=12000;
    }
    kembalian=uang-harga;
    printf("\n jumlah uang awal =%d menu=%d nama =%s harga =%d",uang,menu,nama,harga);
    if (kembalian<0) {;
        printf("\n uang anda kurang,silahkan pilih menu lain atau tambah yang anda \n");
    }else {
    printf("\n kembalian=%d \n",&kembalian);
    printf("\n Terimakasih,semoga anda sakit perut \n");
    }
    return 0;
}
