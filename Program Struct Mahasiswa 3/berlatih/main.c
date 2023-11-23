#include <stdio.h>
#include <stdlib.h>

int main()
{
  char nama[20],kelas[15],jurusan[20];
  char indeks;
  int nim,nilai;
  printf("Masukan nama : ");
  fgets(nama,20,stdin);
  fflush(stdin);
  printf("Masukan kelas : ");
  fgets(kelas,15,stdin);
  fflush(stdin);
  printf("Masukan jurusan : ");
  fgets(jurusan,20,stdin);
  fflush(stdin);
  printf("Masukan nilai kalkulus : ");
  scanf("%d",&nilai);
  switch (nilai){
  case 80 ... 100 :indeks = 'A';break;
  case 60 ... 79  :indeks = 'B';break;
  case 40 ... 59  :indeks = 'C';break;
  case 10 ... 39  :indeks = 'E';break;
  default : indeks = 'E';break;

  }
printf("\nSelamat terhadap anda dibawah ini :\n");
printf("\nNama  :%s",nama);
printf("\nNim   :%d",nim);
printf("\nKelas :%s",kelas);
printf("\nJurusan:%s",jurusan);
printf("\n Anda telah lulus kalkulus dengan index : %c \n",indeks);


    return 0;
}
