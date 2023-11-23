#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct rekaman {
 char nama[25];
 int NIM;
 int Nilai;
 } Rek;

int KelNIM, SumNil, NKuliah;
float Rata;
void Bacadata(int N){
int i;
FILE*Arsip;
Arsip = fopen("Data.txt","w");
for (i=0;i<N;i++){
    printf("Masukkan NIM :"); scanf("%d",&Rek.NIM);
    printf("Masukkan NILAI :"); scanf("%d", &Rek.Nilai);
    fwrite(&Rek, sizeof(Rek),1,Arsip);
}
fclose(Arsip);
}

void Hitungrata(int N){
FILE*Arsip;
Arsip=fopen("Data.txt","r");

fread(&Rek, sizeof(Rek),1,Arsip);
while (!feof(Arsip)){
    SumNil = 0; NKuliah = 0;   // Nilai awal SumNil dan Nkuliah tiap NIM
    KelNIM = Rek.NIM;         // Kunci diisi dengan NIM tiap kelompok
    do {
        SumNil = SumNil+Rek.Nilai;   // menghitung SUmNil dan NKuliah
        NKuliah = NKuliah + 1;
        fread(&Rek, sizeof(Rek),1,Arsip); // Baca data berikutnya
    } while ( KelNIM == Rek.NIM && !feof(Arsip));  // kondisi while
    printf("KelNIM=%d,SumNil=%d, NKuliah=%d, Rata2 nilai=%f \n",
    KelNIM,SumNil,NKuliah,(float)SumNil/NKuliah);
    KelNIM=Rek.NIM;    // Kunci diisi dengan NIM kelompok berikutnya
}
 fclose(Arsip);
}

int main(){
  int n;
  printf("Jumlah data : ");
  scanf("%d",&n);
  Bacadata(n);
  Hitungrata(n);
  return 0;
}
