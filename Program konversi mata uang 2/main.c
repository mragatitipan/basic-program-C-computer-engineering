#include <stdio.h>
#include <stdlib.h>
#define DOLLAR 14000
#define EURO  15600


    void konversi_uang(float jumlah_masukkan,float *hasil_dollar,float *hasil_euro){
    *hasil_dollar = jumlah_masukkan / DOLLAR;
    *hasil_euro = jumlah_masukkan / EURO;
}
    int main(){
    float dollar,euro,jml;
    printf("\nMuhammad Raga Titipan\n");
    printf("(1103194185) / (TK-43-04)");
    printf("\nMasukan Nilai Uang :");
    scanf("%f",&jml);
    konversi_uang(jml,&dollar,&euro);
    printf("\n");
    printf("Dalam Dollar uang anda adalah %.2f dollar \n",dollar);
    printf("Dalam Euro uang anda adalah %.2f euro ",euro);
    printf("\n");
    return 0;
}
