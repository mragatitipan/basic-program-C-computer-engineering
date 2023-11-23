#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct akun{
    char nama[100], username[100], password[100];
    int umur;
};

struct akun asliAkun, tempAkun[100]; //pendeklarasian struct akun

void registrasiAkun()
{
    system("cls");
    FILE *user;
    user = fopen("User.txt", "a");

    printf("Masukkan Username   : ");
    gets(asliAkun.username);
    printf("Masukkan Password   : ");
    gets(asliAkun.password);
    printf("Masukkan Nama Anda  : ");
    gets(asliAkun.nama);
    printf("Masukkan Umur Anda  : ");
    scanf("%d", &asliAkun.umur);

    fprintf(user, "%s#%s#%s#%d\n", asliAkun.username, asliAkun.password, asliAkun.nama, asliAkun.umur);
    fclose(user);

    //Back to menu
    menuUtama();
}

void loginAkun()
{
    system("cls");
    int i, n;
    FILE *user;
    user = fopen("User.txt", "r");

    //Pembacaan File User.txt//
    i = 0;
    n = 0;

    while(!feof(user))
    {
        fscanf(user, "%[^#]#%[^#]#%[^#]#%d\n", &tempAkun[i].username, &tempAkun[i].password, &tempAkun[i].nama, &tempAkun[i].umur);
        n++;
        i++;
    }
    fclose(user);
    //End of read File User.txt//

    char usernameLogin[100], passwordLogin[100];

    //COPYRIGHT BY PAL
    printf("Masukkan Username: ");
    gets(usernameLogin);
    printf("Masukkan Password: ");
    gets(passwordLogin);

    //Pencarian username dan password//
    int kondisi = 0; //variabel sementara untuk kondisi perulangan

    for(i=0; i<n; i++)
    {
        if(strcmp(usernameLogin, tempAkun[i].username) == 0 && strcmp(passwordLogin, tempAkun[i].password) == 0)
        {
            //Aksi Selanjutnya
            printf("Selamat Datang %s\n", tempAkun[i].nama);

            system("pause");

            kondisi = 0;
            break; //Jangan lupa untuk break, karena kalau tidak dia akan kembali pada perulangan ini
        }
        else{
            kondisi = 1;
        }
    }
    //Akhir dari pencarian username dan password//

    if(kondisi != 0)
    {
        printf("\nUsername atau Password tidak terdaftar silahkan login kembali!\n");
        system("pause");
        loginAkun();
    }

}

void menuUtama(){
    int pilihanMenuUtama;
    printf(
           "MENU\n"
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

int main()
{
int pilihan,jenis,merk,type,nik,sewa,total,harga=0,d=0;
char ulangi ='y',alamat[100],m;
int counter=0;
    menuUtama();
    printf("\nProcessing...");
    printf("\nSucsess\n");

 printf("-------SELAMAT DATANG DI FR MUSIC STORE------\n");
 do{
 printf("Pilihan: \n");
 printf("1. beli\n");
 printf("2. sewa\n");

 printf("Pilihan Anda : ");
 scanf("%d",&pilihan);
 if (pilihan==1)
  {
        printf("pilih barang yang ingin anda beli \n 1. Souncard\n 2. Headphones monitor\n 3. Mic condenser\n");
        printf("pilihan anda : ");
        scanf("%d",&jenis);

            if(jenis==1)
                {{
                    {printf("----Anda Memilih Membeli Alat Baru----\n");
                printf("Pilih Merk Soundcard\n");
                printf("1. Behringer\n");
                printf("2. PreSonus AudioBox USB 2x2\n");
                printf("3. Focusrite Scarlett Solo 2nd\n");
                printf("4. Audient iD4\n");
                printf("Masukkan Pilihan Anda: ");
                scanf("%d",&merk);
            }
            if (merk==1)
   {
                printf("Pilih Type\n");
                printf("1. Behringer U-Phoria UM2\n");
                printf("2. Behringer U-Control UCA202\n");;
                printf("Masukkan type: ");
                scanf("%d",&type);
            }
   if (type==1)
   {
     harga = 700000;
     printf("Anda membeli Soundcard merk Behringer bertype Behringer U-Phoria UM2 harga %d ",harga);
   }
   if (type==2)
   {
                harga = 550000;
                printf("Anda membeli Soundcard merk Behringer bertype Behringer U-Control UCA202 harga %d ",harga);
            }


   if(merk==2){
                printf("Anda membeli Soundcard merk bertype PreSonus AudioBox USB 2×2 harga 1.700.000 ");
            }
            if(merk==3){
                printf("Anda membeli Soundcard merk Focusrite Scarlett Solo 2nd harga 2.200.000 ");
            }
            if(merk==4){
                printf("Anda membeli Soundcard merk Audient iD4 harga 2.700.000 ");
            }
                }
            if(jenis==2)
                {
                    {printf("----Anda Memilih Membeli Alat Baru----\n");
                printf("Pilih Merk Headphones monitor\n");
                printf("1. Sennheiser \n");
                printf("2. Audio-Technica ATH-M50x\n");
                printf("3. Beyerdynamic DT 770 PRO-250\n");
                printf("4. Marshall \n");
                printf("Masukkan Pilihan Anda: ");
                scanf("%d",&merk);
            }
            if (merk==1)
   {
                printf("Pilih Type\n");
                printf("1. Sennheiser HD 650\n");
                printf("2. ennheiser HD 800 \n");;
                printf("Masukkan type: ");
                scanf("%d",&type);
            }
   if (type==1)
   {
     harga = 6220000;
     printf("Anda membeli Headphones monitor merk Sennheiser bertype Sennheiser HD 650 harga %d ",harga);
   }
   if (type==2)
   {
                harga = 18000000;
                printf("Anda membeli Headphones monitor merk Sennheiser bertype Sennheiser HD 800 harga %d ",harga);
            }

            }
   if(merk==2){
                printf("Anda membeli Headphones monitor merk Audio-Technica ATH-M50x harga 1.800.000 ");
            }
            if(merk==3){
                printf("Anda membeli Headphones monitor merk Beyerdynamic DT 770 PRO-250  harga 4.100.000 ");
            }
            if(merk==4){
                printf("Anda membeli Headphones monitor merk Marshall harga 1.300.000 ");
            }
            if(jenis==3)
                {
                    {printf("----Anda Memilih Membeli Alat Baru----\n");
                printf("Pilih Merk Mic condenser\n");
                printf("1. Rode \n");
                printf("2. Shure Beta\n");
                printf("3. Behringer C1\n");
                printf("4. M-Audio Nova \n");
                printf("Masukkan Pilihan Anda: ");
                scanf("%d",&merk);
            }
            if (merk==1)
   {
                printf("Pilih Type\n");
                printf("1. Rode NT3 650\n");
                printf("2. Rode NTK \n");;
                printf("Masukkan type: ");
                scanf("%d",&type);
            }
   if (type==1)
   {
     harga = 2700000;
     printf("Anda membeli Mic condenser merk Sennheiser bertype Sennheiser HD 650 harga %d ",harga);
   }
   if (type==2)
   {
                harga = 5000000;
                printf("Anda membeli Mic condenser merk Sennheiser bertype Sennheiser HD 800 harga %d ",harga);
            }

            }
   if(merk==2){
                printf("Anda membeli Mic condenser merk Shure Beta 58  harga 1.200.000 ");
            }
            if(merk==3){
                printf("Anda membeli Mic condenser merk Behringer C1  harga 1.000.000 ");
            }
            if(merk==4){
                printf("Anda membeli Mic condenser merk M-Audio Nova harga 1.500.000 ");
            }

            }}
    if (pilihan==2)
  {{  printf("Masukkan data anda terlebih dahulu :");
  printf("dimana anda tinggal?");
  scanf("%s",&alamat);fflush(stdin);
  printf("masukkan NIK anda :");
  scanf("%d",&nik);
        printf("pilih barang yang ingin anda sewa \n 1. Souncard\n 2. Headphones monitor\n 3. Mic condenser\n");
        printf("pilihan anda : ");
        scanf("%d",&jenis);

            if(jenis==1)
                {
                    {printf("----Anda Memilih Menyewa Alat----\n");
                printf("Pilih Merk Soundcard\n");
                printf("1. Behringer\n");
                printf("2. PreSonus AudioBox USB 2×2\n");
                printf("3. Focusrite Scarlett Solo 2nd\n");
                printf("4. Audient iD4\n");
                printf("Masukkan Pilihan Anda: ");
                scanf("%d",&merk);
            }
            if (merk==1)
   {
                printf("Pilih Type\n");
                printf("1. Behringer U-Phoria UM2\n");
                printf("2. Behringer U-Control UCA202\n");;
                printf("Masukkan type: ");
                scanf("%d",&type);
            }
   if (type==1)
   {
     harga = 700000;
     printf("Berapa hari anda ingin menyewa : ");
     scanf("%d",&sewa);
     total=sewa*harga;
     printf("Anda Menyewa Soundcard merk Behringer bertype Behringer U-Phoria UM2 harga %d disewa %d hari dengan total %d ",harga,sewa,total);
   }
   if (type==2)
   {
                harga = 550000;
                printf("Berapa hari anda ingin menyewa : ");
     scanf("%d",&sewa);
     total=sewa*harga;
                printf("Anda Menyewa Soundcard merk Behringer bertype Behringer U-Control UCA202 harga %d disewa %d hari dengan total %d ",harga,sewa,total);
            }


   if(merk==2){
                harga = 1700000;
                printf("Berapa hari anda ingin menyewa : ");
     scanf("%d",&sewa);
     total=sewa*harga;
                printf("Anda Menyewa Soundcard merk Behringer bertype PreSonus AudioBox USB 2×2 harga %d disewa %d hari dengan total %d ",harga,sewa,total);
            }
            if(merk==3){
                harga = 2200000;
                printf("Berapa hari anda ingin menyewa : ");
     scanf("%d",&sewa);
     total=sewa*harga;
                printf("Anda Menyewa Soundcard merk Focusrite Scarlett Solo 2nd harga %d disewa %d hari dengan total %d ",harga,sewa,total);
            }
            if(merk==4){
                harga = 2700000;
                printf("Berapa hari anda ingin menyewa : ");
     scanf("%d",&sewa);
     total=sewa*harga;
                printf("Anda Menyewa Soundcard merk Audient iD4 harga %d disewa %d hari dengan total %d ",harga,sewa,total);
            }
                }
            if(jenis==2)
                {
                    {printf("----Anda Memilih Menyewa----\n");
                printf("Pilih Merk Headphones monitor\n");
                printf("1. Sennheiser \n");
                printf("2. Audio-Technica ATH-M50x\n");
                printf("3. Beyerdynamic DT 770 PRO-250\n");
                printf("4. Marshall \n");
                printf("Masukkan Pilihan Anda: ");
                scanf("%d",&merk);
            }
            if (merk==1)
   {
                printf("Pilih Type\n");
                printf("1. Sennheiser HD 650\n");
                printf("2. ennheiser HD 800 \n");;
                printf("Masukkan type: ");
                scanf("%d",&type);
            }
   if (type==1)
   {
                harga = 6220000;
                printf("Berapa hari anda ingin menyewa : ");
     scanf("%d",&sewa);
     total=sewa*harga;
                printf("Anda Menyewa Headphones monitor merk Sennheiser HD 650 harga %d disewa %d hari dengan total %d ",harga,sewa,total);
   }
   if (type==2)
   {
                harga = 18000000;
                printf("Berapa hari anda ingin menyewa : ");
     scanf("%d",&sewa);
     total=sewa*harga;
                printf("Anda Menyewa Headphones monitor merk Sennheiser HD 800 harga %d disewa %d hari dengan total %d ",harga,sewa,total);
            }

            }
   if(merk==2){
                harga = 1800000;
                printf("Berapa hari anda ingin menyewa : ");
     scanf("%d",&sewa);
     total=sewa*harga;
                printf("Anda Menyewa Headphones monitor merk Audient iD4 harga %d disewa %d hari dengan total %d ",harga,sewa,total);
            }
            if(merk==3){
                harga = 4100000;
                printf("Berapa hari anda ingin menyewa : ");
     scanf("%d",&sewa);
     total=sewa*harga;
                printf("Anda Menyewa Headphones monitor merk Audio-Technica ATH-M50x harga %d disewa %d hari dengan total %d ",harga,sewa,total);
            }
            if(merk==4){
                harga = 1300000;
                printf("Berapa hari anda ingin menyewa : ");
     scanf("%d",&sewa);
     total=sewa*harga;
                printf("Anda Menyewa Headphones monitor merk Beyerdynamic DT 770 PRO-250 harga %d disewa %d hari dengan total %d ",harga,sewa,total);
            }
            if(jenis==3)
                {
                    {printf("----Anda Memilih Menyewa----\n");
                printf("Pilih Merk Mic condenser\n");
                printf("1. Rode \n");
                printf("2. Shure Beta\n");
                printf("3. Behringer C1\n");
                printf("4. M-Audio Nova \n");
                printf("Masukkan Pilihan Anda: ");
                scanf("%d",&merk);
            }
            if (merk==1)
   {{
                printf("Pilih Type\n");
                printf("1. Rode NT3 650\n");
                printf("2. Rode NTK \n");;
                printf("Masukkan type: ");
                scanf("%d",&type);
            }
   if (type==1)
   {
                harga = 2700000;
                printf("Berapa hari anda ingin menyewa : ");
     scanf("%d",&sewa);
     total=sewa*harga;
                printf("Anda Menyewa Mic condenser merk Rode NT3 harga %d disewa %d hari dengan total %d ",harga,sewa,total);}   }
   if (type==2)
   {
                harga = 5000000;
                printf("Berapa hari anda ingin menyewa : ");
     scanf("%d",&sewa);
     total=sewa*harga;
                printf("Anda Menyewa Mic condenser merk Rode NTK  harga %d disewa %d hari dengan total %d ",harga,sewa,total);
            }

            }
   if(merk==2){
                harga = 1200000;
                printf("Berapa hari anda ingin menyewa : ");
     scanf("%d",&sewa);
     total=sewa*harga;
                printf("Anda Menyewa Mic condenser merk Shure Beta harga %d disewa %d hari dengan total %d ",harga,sewa,total);            }
            if(merk==3){
                harga = 1000000;
                printf("Berapa hari anda ingin menyewa : ");
     scanf("%d",&sewa);
     total=sewa*harga;
                printf("Anda Menyewa Mic condenser merk Behringer C1 harga %d disewa %d hari dengan total %d ",harga,sewa,total);            }
            if(merk==4){
                harga = 1500000;
                printf("Berapa hari anda ingin menyewa : ");
     scanf("%d",&sewa);
     total=sewa*harga;
                printf("Anda Menyewa Mic condenser merk M-Audio Nova harga %d disewa %d hari dengan total %d ",harga,sewa,total);            }
            }
             }      printf("\n Apakah Anda akan membeli atau menyewa lagi?[Y/T]: ");
                  scanf("%s",&m);
                  printf("\n");}
            while(m=='y'||m=='Y');





    return 0;
}
