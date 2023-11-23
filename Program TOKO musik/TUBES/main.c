#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
struct akun{
    char nama[100], username[100], password[100];
    int umur, saldo, n;
};

struct akun asliAkun, tempAkun[100];

void menuUtama(){
    int pilihanMenuUtama;
    printf(
           "---MENU---\n"
           "1. Registrasi\n"
           "2. Login\n"
           );
    printf("Masukkan menu yang anda inginkan: ");
    scanf("%d", &pilihanMenuUtama);

    fflush(stdin);
    switch(pilihanMenuUtama)
    {
        case 1: registrasiAkun();break;
        case 2: loginAkun();break;
    }
}
void registrasiAkun()
{
    int pilihanregis;
    printf("Pilihan menu Regristas\n"
           "1. Regristasi pembeli\n"
           "2. Regristasi penjual\n");
    printf("Masukkan menu yang anda inginkan: ");
    scanf("%d",&pilihanregis);

    fflush(stdin);
    switch(pilihanregis)
    {
        case 1: registrasiAkunpembeli();break;
        case 2: registrasiAkunpenjual();break;
    }
}

void registrasiAkunpenjual()
{
    system("cls");
    FILE *user;
    user = fopen("User.txt", "a");

    printf("---MENU REGISTRASI UNTUK PENJUAL---\n");
    printf("Masukkan Username   : ");
    gets(asliAkun.username);
    printf("Masukkan Password   : ");
    gets(asliAkun.password);
    printf("Masukkan Nama Anda  : ");
    gets(asliAkun.nama);
    printf("Masukkan Umur Anda  : ");
    scanf("%d", &asliAkun.umur);
    printf("Masukkan jumlah provider yang Anda inginkan : ");
    scanf("%d",&asliAkun.n);

    fprintf(user, "%s#%s#%s#%d%d\n", asliAkun.username, asliAkun.password, asliAkun.nama, asliAkun.umur, asliAkun.n);
    fclose(user);

    menuUtama();
}
void registrasiAkunpembeli()
{
    system("cls");
    FILE *user;
    user = fopen("User.txt", "a");

    printf("---MENU REGISTRASI UNTUK PEMBELI---\n");
    printf("Masukkan Username   : ");
    gets(asliAkun.username);
    printf("Masukkan Password   : ");
    gets(asliAkun.password);
    printf("Masukkan Nama Anda  : ");
    gets(asliAkun.nama);
    printf("Masukkan Umur Anda  : ");
    scanf("%d", &asliAkun.umur);
    printf("Masukkan saldo yang Anda inginkan : ");
    scanf("%d",&asliAkun.saldo);

    fprintf(user, "%s#%s#%s#%d\n", asliAkun.username, asliAkun.password, asliAkun.nama, asliAkun.umur);
    fclose(user);

    menuUtama();
}
void loginAkun()
{
    int pilihanlogin;
    printf("Pilihan menu Login\n"
           "1. Login pembeli\n"
           "2. Login penjual\n");
    printf("Masukkan menu yang anda inginkan: ");
    scanf("%d",&pilihanlogin);

    fflush(stdin);
    switch(pilihanlogin)
    {
        case 1: loginAkunpembeli();break;
        case 2: loginAkunpenjual();break;
    }
}
void loginAkunpenjual()
{
    system("cls");
    int i, n;
    FILE *user;
    user = fopen("User.txt", "r");

    i = 0;
    n = 0;

    while(!feof(user))
    {
        fscanf(user, "%s%s%s%d%d\n", &tempAkun[i].username, &tempAkun[i].password, &tempAkun[i].nama, &tempAkun[i].umur, &tempAkun[i].n);
        n++;
        i++;
    }
    fclose(user);

    char usernameLogin[100], passwordLogin[100];

    printf("Masukkan Username: ");
    gets(usernameLogin);
    printf("Masukkan Password: ");
    gets(passwordLogin);

    int kondisi = 0;

    for(i=0; i<n; i++)
    {
        if(strcmp(usernameLogin, tempAkun[i].username) == 0 && strcmp(passwordLogin, tempAkun[i].password) == 0)
        {
            printf("---Akun Anda: ---\n");
            printf("Username Anda   : %s\n", tempAkun[i].username);
            printf("Password Anda   : %s\n", tempAkun[i].password);
            printf("Nama Anda       : %s\n", tempAkun[i].nama);
            printf("Umur Anda       : %d\n", tempAkun[i].umur);
            printf("Jumlah provider Anda   : %d\n", tempAkun[i].n);
            system("pause");

            kondisi = 0;
            break;
        }
        else{
            kondisi = 1;
        }
    }

    if(kondisi != 0)
    {
        printf("\nUsername atau Password tidak terdaftar silahkan login kembali!\n");
        system("pause");
        loginAkun();
    }

    }
penjual();
}
void loginAkunpembeli()
{
    system("cls");
    int i, n;
    FILE *user;
    user = fopen("User.txt", "r");

    i = 0;
    n = 0;

    while(!feof(user))
    {
        fscanf(user, "%s%s%s%d%d\n", &tempAkun[i].username, &tempAkun[i].password, &tempAkun[i].nama, &tempAkun[i].umur, &tempAkun[i].saldo);
        n++;
        i++;
    }
    fclose(user);

    char usernameLogin[100], passwordLogin[100];

    printf("Masukkan Username: ");
    gets(usernameLogin);
    printf("Masukkan Password: ");
    gets(passwordLogin);

    int kondisi = 0;

    for(i=0; i<n; i++)
    {
        if(strcmp(usernameLogin, tempAkun[i].username) == 0 && strcmp(passwordLogin, tempAkun[i].password) == 0)
        {
            printf("---Akun Anda: ---\n");
            printf("Username Anda   : %s\n", tempAkun[i].username);
            printf("Password Anda   : %s\n", tempAkun[i].password);
            printf("Nama Anda       : %s\n", tempAkun[i].nama);
            printf("Umur Anda       : %d\n", tempAkun[i].umur);
            printf("Jumlah saldo Anda      : %d\n", tempAkun[i].saldo);
            system("pause");

            kondisi = 0;
            break;
        }
        else{
            kondisi = 1;
        }
    }

    if(kondisi != 0)
    {
        printf("\nUsername atau Password tidak terdaftar silahkan login kembali!\n");
        system("pause");
        loginAkun();
    }
pembeli();
}

void main()
{
    char nama[100][100];
    int jumlahkuota,harga,pilprov,pilihan,n,i;

void penjual()
{
    system("cls");

    printf("--SELAMAT DATANG DAN SELAMAT BEKERJA--");
    printf("ANDA SEDANG BERADA DIMENU PENJUAL\n");
    printf("1. INPUT KUOTA\n");
    printf("2. LIHAT DAFTAR\n");
    printf("3. DAFTAR ORDERAN\n");
    printf("\n");
    printf("MASUKKAN PILIHAN : ");
    scanf("%d",&pilihan);
    switch(pilihan){
                case 1 :    system("cls");
                            printf("1. TELKOMSEL\n"// NAMA PROVIDERNYA
                                   "2. XL\n"
                                   "3. Axis\n"
                                   "4. Indosat\n"
                                   "5. 3\n");

                            printf("PILIH PROVIDER : ");
                            scanf("%d",&pilprov);

                            switch(pilprov){
                            case 1 :system("cls"); // 1 TELKOMSEL
                                    printf("Masukkan Jumlah Pilihan Kuota yang akan ditambahkan : ");scanf("%d",&n);
                                    for(i=0;i<n;i++){
                                    printf("Paket Ke -%d\n",i+1);
                                    fflush(stdin);
                                    printf("Masukkan Nama              : ");gets(nama);
                                    printf("Masukkan Jumlah Kuota (GB) : ");scanf("%d",&jumlahkuota);
                                    printf("Masukkan Harga Kuota       : Rp. ");scanf("%d",&harga);
                                    printf("==================================================\n");
                                    telkomsel=fopen("Telkomsel.txt","a+");
                                    fprintf(telkomsel,"%s#%d#%d#\n\n",nama,jumlahkuota,harga);
                                    fclose(telkomsel);}
                                    printf("\nNOTE : Cek ketersediaan kuota setelah menambah yang baru\n");
                                    system("pause");main();system("cls");break;

                           case 2 : system("cls"); // 2 XL
                                    printf("Masukkan Jumlah Pilihan Kuota yang akan ditambahkan : ");scanf("%d",&n);
                                    for(i=0;i<n;i++){
                                    printf("Mahasiswa Ke -%d\n",i+1);
                                    fflush(stdin);
                                    printf("Masukkan Nama              : ");gets(nama);
                                    printf("Masukkan Jumlah Kuota (GB) : ");scanf("%d",&jumlahkuota);
                                    printf("Masukkan Harga Kuota       : Rp. ");scanf("%d",&harga);
                                    printf("==================================================\n");
                                    xl=fopen("XL.txt","a+");
                                    fprintf(xl,"%s#%d#%d#\n\n",nama,jumlahkuota,harga);
                                    fclose(telkomsel);}
                                    printf("\nNOTE : Cek ketersediaan kuota setelah menambah yang baru\n");
                                    system("pause");main();system("cls");break;
                            case 3 :system("cls"); // 3 AXIS
                                    printf("Masukkan Jumlah Pilihan Kuota yang akan ditambahkan : ");scanf("%d",&n);
                                    for(i=0;i<n;i++){
                                    printf("Paket Ke -%d\n",i+1);
                                    fflush(stdin);
                                    printf("Masukkan Nama              : ");gets(nama);
                                    printf("Masukkan Jumlah Kuota (GB) : ");scanf("%d",&jumlahkuota);
                                    printf("Masukkan Harga Kuota       : Rp. ");scanf("%d",&harga);
                                    printf("==================================================\n");
                                    telkomsel=fopen("Telkomsel.txt","a+");
                                    fprintf(telkomsel,"%s#%d#%d#\n\n",nama,jumlahkuota,harga);
                                    fclose(telkomsel);}
                                    printf("\nNOTE : Cek ketersediaan kuota setelah menambah yang baru\n");
                                    system("pause");main();system("cls");break;
                            case 4 :system("cls"); // 4 INDOSAT
                                    printf("Masukkan Jumlah Pilihan Kuota yang akan ditambahkan : ");scanf("%d",&n);
                                    for(i=0;i<n;i++){
                                    printf("Paket Ke -%d\n",i+1);
                                    fflush(stdin);
                                    printf("Masukkan Nama              : ");gets(nama);
                                    printf("Masukkan Jumlah Kuota (GB) : ");scanf("%d",&jumlahkuota);
                                    printf("Masukkan Harga Kuota       : Rp. ");scanf("%d",&harga);
                                    printf("==================================================\n");
                                    indosat=fopen("Indosat.txt","a+");
                                    fprintf(indosat,"%s#%d#%d#\n\n",nama,jumlahkuota,harga);
                                    fclose(indosat);}
                                    printf("\nNOTE : Cek ketersediaan kuota setelah menambah yang baru\n");
                                    system("pause");main();system("cls");break;
                             case 5:system("cls"); // 5 3
                                    printf("Masukkan Jumlah Pilihan Kuota yang akan ditambahkan : ");scanf("%d",&n);
                                    for(i=0;i<n;i++){
                                    printf("Mahasiswa Ke -%d\n",i+1);
                                    fflush(stdin);
                                    printf("Masukkan Nama              : ");gets(nama);
                                    printf("Masukkan Jumlah Kuota (GB) : ");scanf("%d",&jumlahkuota);
                                    printf("Masukkan Harga Kuota       : Rp. ");scanf("%d",&harga);
                                    printf("==================================================\n");
                                    three=fopen("3.txt","a+");
                                    fprintf(three,"%s#%d#%d#\n\n",nama,jumlahkuota,harga);
                                    fclose(three);}
                                    printf("\nNOTE : Cek ketersediaan kuota setelah menambah yang baru\n");
                                    system("pause");main();system("cls");break;
                                }
                            }
            case 2:         system("cls");
                            printf("DAFTAR KUOTA YANG TERSEDIA");
                            void daftar(){
                            int i,n;
                            struct kuota{
                            char nama[50];
                            } kuo[20];
                            int cari;
                            int jumlah[20];
                            int harga [20];
                            int pass,temp,temp2;
                            char temp1[50];

                            system("cls");
                            i=0; n=0;
                            telkomsel=fopen("Telkomsel.txt","r+");
                            while(!feof(telkomsel)){
                                    fscanf(telkomsel,"%[^#]#%d#%d#\n\n",&kuo[i].nama,&jumlah[i],&harga[i]);
                                    i++;
                                    n++;
                            }
                            for(i=0; i<n; i++){
                                printf("NAMA PAKET   : %s\n",kuo[i].nama);
                                printf("JUMLAH KUOTA : %d GB\n",jumlah[i]);
                                printf("HARGA        : Rp. %d\n",harga[i]);
                                printf("=================================================\n");
                            }
                            fclose(telkomsel);system("pause");main();
                            i=0; n=0;
                            xl=fopen("XL.txt","r+");
                            while(!feof(xl)){
                                    fscanf(xl,"%[^#]#%d#%d#\n\n",&kuo[i].nama,&jumlah[i],&harga[i]);
                                    i++;
                                    n++;
                            }
                            for(i=0; i<n; i++){
                                printf("NAMA PAKET   : %s\n",kuo[i].nama);
                                printf("JUMLAH KUOTA : %d GB\n",jumlah[i]);
                                printf("HARGA        : Rp. %d\n",harga[i]);
                                printf("=================================================\n");
                            }
                            fclose(xl);system("pause");main();
                            i=0; n=0;
                            axis=fopen("Axis.txt","r+");
                            while(!feof(axis)){
                                    fscanf(axis,"%[^#]#%d#%d#\n\n",&kuo[i].nama,&jumlah[i],&harga[i]);
                                    i++;
                                    n++;
                            }
                            for(i=0; i<n; i++){
                                printf("NAMA PAKET   : %s\n",kuo[i].nama);
                                printf("JUMLAH KUOTA : %d GB\n",jumlah[i]);
                                printf("HARGA        : Rp. %d\n",harga[i]);
                                printf("=================================================\n");
                            }
                            fclose(axis);system("pause");main();
                            i=0; n=0;
                            indosat=fopen("Indosat.txt","r+");
                            while(!feof(indosat)){
                                    fscanf(indosat,"%[^#]#%d#%d#\n\n",&kuo[i].nama,&jumlah[i],&harga[i]);
                                    i++;
                                    n++;
                            }
                            for(i=0; i<n; i++){
                                printf("NAMA PAKET   : %s\n",kuo[i].nama);
                                printf("JUMLAH KUOTA : %d GB\n",jumlah[i]);
                                printf("HARGA        : Rp. %d\n",harga[i]);
                                printf("=================================================\n");
                            }
                            fclose(indosat);system("pause");main();
                            i=0; n=0;
                            three=fopen("3.txt","r+");
                            while(!feof(three)){
                                    fscanf(three,"%[^#]#%d#%d#\n\n",&kuo[i].nama,&jumlah[i],&harga[i]);
                                    i++;
                                    n++;
                            }
                            for(i=0; i<n; i++){
                                printf("NAMA PAKET   : %s\n",kuo[i].nama);
                                printf("JUMLAH KUOTA : %d GB\n",jumlah[i]);
                                printf("HARGA        : Rp. %d\n",harga[i]);
                                printf("=================================================\n");
                            }
                            fclose(three);system("pause");main();
}
            case 3:         system("cls");
                            daftarpesanan();break;
                            int jumlah;
                            char nama[50];
                            char pesan[10000];
                            char alamat[1000];
                            system("cls"); //buat close page sebelumnya
                            pesanan=fopen("Pesankuota.txt","r+");
                            while(!feof(pesanan)){
                            fscanf(pesanan,"%[^#]#%d#%[^#]#%[^#]#\n",&nama,&jumlah,&alamat,&pesan);
                            printf("------------------------------------------------------------------\n");
                            printf("\t\t PESAN DARI PELANGGAN ANDA\n");
                            printf("\n------------------------------------------------------------------");
                            printf("\nNama Paket Kuota : %s\nJumlah Kuota: %d GB\nAlamat Penerima : %s\nPesanan : %s\n",nama,jumlah,alamat,pesan);
                            printf("------------------------------------------------------------------\n");
                            printf("\nNOTE : SEGERA HAPUS ORDERAN YANG SUDAH DIKIRIM / DILAYANI PADA DATA AGAR TIDAK TERJADI KESALAHAN\n");

                            }fclose(pesanan);system("pause");main();
            }

}
void pembeli()
    system("cls");
    printf("--SELAMAT DATANG DAN SELAMAT BERBELANJA--\n");
    printf("ANDA SEDANG BERADA DI MENU BELANJA\n")
    printf("1. CARI\n");
    printf("2. LIHAT DAFTAR\n");
    printf("3. PESAN KUOTA\n");
    printf("\n");
    printf("MASUKKAN MENU YANG ANDA INGINGKAN : ");
    scanf("%d",&pilihan);
    switch(pilihan){
            case 1 : cari();break;
            case 2 : daftar();break;
            case 3 : pesankuota();break;
    }
void cari(){
    //SEARCHING
    int i,n;
    struct kuota{
    char nama[50];
    }kuo[20];
    int cari;
    int jumlah[20];
    int harga [20];
    int pass,temp,temp2;
    char temp1[50];
    system("cls");
        telkomsel=fopen("Telkomsel.txt","r+");
        printf("\t\tPENCARIAN JUMLAH KUOTA\n");
        printf("--------------------------------------------------\n");
        printf("MASUKKAN JUMLAH KUOTA YANG DIINGINKAN : ");
        scanf("%d",&cari);
        i=0; n=0;

        while(!feof(telkomsel)){
        fscanf(telkomsel,"%[^#]#%d#%d#\n\n",&kuo[i].nama,&jumlah[i],&harga[i]);
        i++;n++;
        }
        fclose(telkomsel);
        for(i=0; i<n; i++){
            if(cari==jumlah[i]){
            printf("\n");
            printf("- - - - - - - - PAKET - - - - - - - - - \n");
            printf("NAMA PAKET   : %s\n",kuo[i].nama);
            printf("JUMLAH KUOTA : %d GB\n",jumlah[i]);
            printf("HARGA        : Rp. %d\n",harga[i]);
            printf("- - - - - - - - - - - - - - - - - - - - - - - - -\n");
            printf("\n");
            system("pause");main();
            }
        }
        if(cari!=jumlah[i]){
            printf("- - - - - - - - - - - - - - - - - - - - - - - - -\n");
            printf("\t  TIDAK DITEMUKAN !!!\n");
            printf("- - - - - - - - - - - - - - - - - - - - - - - - -\n");
            system("pause");main();
        }
void daftar()
{
    system("cls");
    printf("DAFTAR KUOTA YANG TERSEDIA");
    void daftar(){
    int i,n;
    struct kuota{
    char nama[50];
    } kuo[20];
    int cari;
    int jumlah[20];
    int harga [20];
    int pass,temp,temp2;
    char temp1[50];

    //SORTING
    for(pass=1; pass<n; ++pass){
        for(i=0; i<n-1; ++i){
            if(jumlah[i+1]<jumlah[i]){
                temp=jumlah[i];
                jumlah[i]=jumlah[i+1];
                jumlah[i+1]=temp;

                strcpy(temp1,kuo[i].nama);
                strcpy(kuo[i].nama,kuo[i+1].nama);
                strcpy(kuo[i].nama,temp1);

                temp2=harga[i];
                harga[i]=harga[i+1];
                harga[i+1]=temp2;
                }
            }
    }
    for(i=0; i<n; i++){
        printf("\t\tURUTAN Ke-%d\n",i+1);
        printf("NAMA PAKET   : %s\n",kuo[i].nama);
        printf("JUMLAH KUOTA : %d GB\n",jumlah[i]);
        printf("HARGA        : Rp. %d\n",harga[i]);
        printf("=================================================\n");
    }
    fclose(telkomsel);system("pause");main();
    i=0; n=0;
    telkomsel=fopen("Telkomsel.txt","r+");
    while(!feof(telkomsel)){
        fscanf(telkomsel,"%[^#]#%d#%d#\n\n",&kuo[i].nama,&jumlah[i],&harga[i]);
        i++;n++;
    }
    for(i=0; i<n; i++){
        printf("\t\tURUTAN Ke-%d\n",i+1);
        printf("NAMA PAKET   : %s\n",kuo[i].nama);
        printf("JUMLAH KUOTA : %d GB\n",jumlah[i]);
        printf("HARGA        : Rp. %d\n",harga[i]);
        printf("=================================================\n");
    }
    fclose(telkomsel);system("pause");main();
    i=0; n=0;
    xl=fopen("XL.txt","r+");
    while(!feof(xl)){
        fscanf(xl,"%[^#]#%d#%d#\n\n",&kuo[i].nama,&jumlah[i],&harga[i]);
        i++;n++;
    }
    for(i=0; i<n; i++){
        printf("\t\tURUTAN Ke-%d\n",i+1);
        printf("NAMA PAKET   : %s\n",kuo[i].nama);
        printf("JUMLAH KUOTA : %d GB\n",jumlah[i]);
        printf("HARGA        : Rp. %d\n",harga[i]);
        printf("=================================================\n");
    }
    fclose(xl);system("pause");main();
    i=0; n=0;
    axis=fopen("Axis.txt","r+");
    while(!feof(axis)){
        fscanf(axis,"%[^#]#%d#%d#\n\n",&kuo[i].nama,&jumlah[i],&harga[i]);
        i++;n++;
    }
    for(i=0; i<n; i++){
        printf("\t\tURUTAN Ke-%d\n",i+1);
        printf("NAMA PAKET   : %s\n",kuo[i].nama);
        printf("JUMLAH KUOTA : %d GB\n",jumlah[i]);
        printf("HARGA        : Rp. %d\n",harga[i]);
        printf("=================================================\n");
    }
    fclose(axis);system("pause");main();
    i=0; n=0;
    indosat=fopen("Indosat.txt","r+");
    while(!feof(indosat)){
    fscanf(indosat,"%[^#]#%d#%d#\n\n",&kuo[i].nama,&jumlah[i],&harga[i]);
    i++;n++;
    }
    for(i=0; i<n; i++){
        printf("\t\tURUTAN Ke-%d\n",i+1);
        printf("NAMA PAKET   : %s\n",kuo[i].nama);
        printf("JUMLAH KUOTA : %d GB\n",jumlah[i]);
        printf("HARGA        : Rp. %d\n",harga[i]);
        printf("=================================================\n");
    }
    fclose(indosat);system("pause");main();
    i=0; n=0;
    three=fopen("3.txt","r+");
    while(!feof(three)){
        fscanf(three,"%[^#]#%d#%d#\n\n",&kuo[i].nama,&jumlah[i],&harga[i]);
        i++;n++;
    }
    for(i=0; i<n; i++){
        printf("\t\tURUTAN Ke-%d\n",i+1);
        printf("NAMA PAKET   : %s\n",kuo[i].nama);
        printf("JUMLAH KUOTA : %d GB\n",jumlah[i]);
        printf("HARGA        : Rp. %d\n",harga[i]);
        printf("=================================================\n");
    }
    fclose(three);system("pause");main();
}
void pesankuota(){

    int jumlah;
    char nama[50];
    char pesan[10000];
    char alamat[1000];
    fflush(stdin);
    system("cls");
    printf("- - - - - - - - - HALAMAN UNTUK MEMBUAT PESANAN - - - - - - - - - -\n");
    printf("Masukkan nama kuota     : ");gets(nama);
    printf("Masukkan Jumlah Kuota   : ");scanf("%d",&jumlah);
    fflush(stdin);
    printf("Masukkan Alamat Pembeli : ");gets(alamat);
    printf("-------------------------------------------------------------------\n");
    printf("PESAN : \n");fflush(stdin);gets(pesan);
    printf("\n-------------------------------------------------------------------\n");
    printf("\t\t PESANAN BERHASIL DIKIRIM, AKAN SEGERA KAMI PROSES\n");
    printf("-------------------------------------------------------------------\n\n");
    pesanan=fopen("Pesankuota.txt","a+");
    fprintf(pesanan,"%s#%d#%s#%s#\n",nama,jumlah,alamat,pesan);
    fclose(pesanan);system("\t\tpause");main();system("cls");
}
    return 0;
}
