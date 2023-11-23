#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct mahasiswa {
    char Nama[25];
    int NIM;
    float IPK;
    int skslulus;
    }mhs[20];

    struct nilai {
    int NIM;
    char NamaMK[10];
    int sks;
    int uts;
    int uas;
    char index;
    }nil[20];

    int i,j,NA=0;
    for (i=0;i<2;i++) {
    printf("--- Data Mahasiswa ke-%d ---\n",i+1);
    printf("Masukkan NAMA Mahasiswa : ");
    fgets(mhs[i].Nama,25,stdin);
    fflush(stdin);
    printf("Masukkan NIM = ");
    scanf("%d",&mhs[i].NIM);
    printf("\n");
    fflush(stdin);
    }

    for (j=0;j<6;j++){
        printf("\n");
        printf("--- Data Nilai ke-%d ---\n",j+1);
        printf("\nMasukkan NIM   :");
        scanf("%d",&nil[j].NIM);
        fflush(stdin);
        printf("Masukkan NamaMK :");
        fgets(nil[j].NamaMK,10,stdin);
        fflush(stdin);
        printf("Masukan SKS   : ");
        scanf("%d",&nil[j].sks);
        printf("Masukan nilai UTS   : ");
        scanf("%d",&nil[j].uts);
        printf("Masukkan nilai UAS : ");
        scanf("%d",&nil[j].uas);
    }

    for (j=0;j<6;j++){
            NA=(0.3*nil[j].uts)+(0.7*nil[j].uas);
            switch (NA){
            case 80 ... 100 : nil[j].index = 'A';break;
            case 70 ... 79 : nil[j].index = 'B';break;
            case 55 ... 69 : nil[j].index = 'C';break;
            case 40 ... 54 : nil[j].index = 'D';break;
            default : nil[j].index = 'E';
            }
    }

    for (i=0;i<2;i++){
        int bobotMK,jml_bobot=0,jml_sks=0;
        mhs[i].skslulus=0;
        for (j=0;j<6;j++){
            switch(nil[j].index){
                case 'A': bobotMK=(4*nil[j].sks);break;
                case 'B': bobotMK=(3*nil[j].sks);break;
                case 'C': bobotMK=(2*nil[j].sks);break;
                case 'D': bobotMK=(1*nil[j].sks);break;
                default : bobotMK=0*nil[j].sks;
                }
            if (mhs[i].NIM == nil[j].NIM){
                jml_bobot=jml_bobot+bobotMK;
                jml_sks=jml_sks+nil[j].sks;
                if (nil[j].index!='E'){
                mhs[i].skslulus=mhs[i].skslulus+nil[j].sks;
             }
        }
        mhs[i].IPK=(float)jml_bobot/jml_sks;
    }
}

    for(i=0; i<2; i++){
        printf("\n");
        printf("Nama : %s",mhs[i].Nama);
        printf("NIM  : %d\n",mhs[i].NIM);
        printf("IPK  : %.2f\n",mhs[i].IPK);
        printf("SKS Lulus : %d\n",mhs[i].skslulus);
        printf("\n");
    }
    printf("\n");

    int cari;
    printf("Masukkan NIM yang akan di cari : ");
    scanf("%d",&cari);
    for(i=0;i<2;i++){
        if (cari == mhs[i].NIM){
        printf("\nNama      : %s",mhs[i].Nama);
        printf("IPK       :%.2f",mhs[i].IPK);
        printf("\nSKS LULUS :%d",mhs[i].skslulus);
        printf("\n");
        }
    }
        for (j=0;j<6;j++){
        if (cari == nil[j].NIM ){

        printf("\nNamaMK    :%s",nil[j].NamaMK);
        printf("UTS         :%d",nil[j].uts);
        printf("\nUAS       :%d",nil[j].uas);
        printf("\n");
        }
    }
    return 0;
}
