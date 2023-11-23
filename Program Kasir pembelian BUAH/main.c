#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Buah{
	int kode;
	char nama[15];
   int jml_sedia;
   int hrgsatuan;

   } buah[10], databuah;

struct Beli{
   int kode;
   int jml_beli;
   int totalharga ;
   } beli[25], databeli;

   int N,M;
   int i,j;

void isidata(){
                buah[0].kode=101;
                strcpy(buah[0].nama,"mangga");
                buah[0].jml_sedia=10;
                buah[0].hrgsatuan=1000;

                    buah[1].kode=102;
                    strcpy(buah[1].nama,"jeruk");
                    buah[1].jml_sedia=10;
                    buah[1].hrgsatuan=500;

                          buah[2].kode=103;
                          strcpy(buah[2].nama,"apel");
                          buah[2].jml_sedia=10;
                          buah[2].hrgsatuan=1500;

                                  buah[3].kode=104;
                                  strcpy(buah[3].nama,"durian");
                                  buah[3].jml_sedia=10;
                                  buah[3].hrgsatuan=50000;

   int i;

  beli[0].kode=104;
  beli[0].jml_beli=2;

          beli[1].kode=101;
          beli[1].jml_beli=1;

              beli[2].kode=103;
              beli[2].jml_beli=3;

                      beli[3].kode=104;
                      beli[3].jml_beli=1;

                              beli[4].kode=104;
                              beli[4].jml_beli=2;

                                      beli[5].kode=101;
                                      beli[5].jml_beli=3;
                                                                N=4; M=6;
                                      printf("====> Data buah : <====\n");
                                      for (i=0;i<N;i++)
  printf("Buah %d dengan nama %s tersedia %d buah dg harga satuan %d\n",buah[i].kode,buah[i].nama,buah[i].jml_sedia,buah[i].hrgsatuan);
  printf("====> Data beli : <====\n");
                                      for (i=0;i<M;i++)
  printf("Beli %d dengan jumlah %d\n",beli[i].kode,beli[i].jml_beli);
  printf("\n");
}
void Buattotal(int N,int M)
 {
          int i,j,a;
            databeli.jml_beli=databeli.jml_beli+databeli.jml_beli;
                for (j=0;j<M;j++){
                        for (i=0;i<N;i++){
                                 if (beli[j].kode==buah[i].kode){
                                         buah[i].jml_sedia=buah[i].jml_sedia-beli[j].jml_beli;
                                                beli[j].totalharga=beli[j].jml_beli*buah[i].hrgsatuan;
                                    }
                                }
                            }
                printf("\n\n----> MENGISI DATA TOTALHARGA <-----");
                for(a=0;a<N;++a){
                printf("\n");
                fflush(stdin);
                printf("Buah %s tersedia %d buah\n",buah[a].nama,buah[a].jml_sedia);
                                }
        }
void BubbleSort(int N)
{
      int i,pass;
        printf("\n----> URUTAN DATA DENGAN BUBBLE SORT <----\n");
                    for (pass=1;pass<N;pass++){
                    for(i=0;i<N-1; i++){
                    if (beli[i].kode>beli[i+1].kode){
                            databeli=beli[i];
                            beli[i]=beli[i+1];
                            beli[i+1]=databeli;
                    }
                }
            }
        }

void Laporan(int M)
{
     int nokode;
     int jml_harga=0,i=0,totalsemua=0;
     BubbleSort(M);
     for(i=0;i<M;i++){
     printf("%d %d %d\n",beli[i].kode,beli[i].jml_beli,beli[i].totalharga);
     }
            nokode=beli[0].kode;
            for(i=0;i<M;i){
            jml_harga=0;
            while(beli[i].kode==nokode){
            jml_harga=jml_harga+beli[i].totalharga;
            i++;
            }
            printf("\n");
             printf("KODE : %d total harga adalah : %d\n ", nokode,jml_harga);
                    nokode=beli[i].kode;
                    totalsemua=totalsemua+jml_harga;
                    }
                    fflush(stdin);
                    printf("\nTOTAL");
                    printf("\nTOTAL SEMUA HARGA : %d", totalsemua);

                    }
int main()
 {
     printf("======>>> PROGRAM TOKO BUAH TUGAS UAS ALPRO <<<======\n");
     printf("Nama       : MUHAMMAD RAGA TITIPAN");
     printf("\nNim      : 1103194185\n");
     printf("Kelas      : TK-43-04\n\n");
            isidata();
            Buattotal(4,6);
            Laporan(6);


 return 0;

}
