#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct mahasiswa{
	int nim;
	char nama[25];
	} mhs[10], data,data1;

int main()
{
   FILE *fp;
   fp = fopen("test1.txt", "w");
   data.nim=111;
   strcpy(data.nama,"Asep Surasep");
   fwrite(&data,sizeof(data),1,fp);
   fp=fopen("test1.txt","r");
   fread(&data1,sizeof(data1),1,fp);
   printf("%d %s\n",data.nim,data.nama);
   fclose(fp);

    return 0;
}
