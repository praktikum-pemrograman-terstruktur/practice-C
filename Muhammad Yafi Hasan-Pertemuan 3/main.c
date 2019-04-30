#include <stdio.h>
#include <string.h>
int main ()
{
    int a,x;
    printf ("Masukkan jumlah nama yang ingin anda masukkan : ");
    scanf ("%d", &a);
    char name [a][50];
    for (x=0;x<a;x++)
    {
        scanf ("%s",name[x]);
    }
    printf ("Berdasarkan data di atas, maka hasilnya menjadi:\n");
    for (x=0;x<a;x++)
    {
        int y,z,i;
        y=x;
        for (i=x;i<a;i++)
        {
            z=strcmp(name[y],name[i]);
            if (z==1)
            {
                y=i;
            }
        }

        char smntr[1][50];
        strcpy(smntr[0],name[y]);
        strcpy(name[y],name[x]);
        strcpy(name[x],smntr[0]);
        puts(name[x]);


    }
    return 0;
}
