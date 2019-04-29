#include <stdio.h>
#include <string.h>
 
int main() {
    printf ("Silahkan masukkan banyaknya nama yang akan diurutkan : ");
    int n;
    scanf ("%d", &n);
    char nama [n][30];
    printf ("Silahkan masukkan nama-nama yang akan diurutkan.\nINPUT: \n");
    for (int i=0; i<=n-1; i++) scanf ("%s", nama [i]);
    printf ("//////////\nOUTPUT :\n");
    
    for(int i=0;i<n;i++){
 
            int j,bd;
            j=i;
            for(int k=i+1;k<n;k++)
            {
                bd=strcmp(nama[j],nama[k]);
                if(bd==1) j=k;       
              }
                            
            char temp[1][30];
            strcpy(temp[0],nama[j]);
            strcpy(nama[j],nama[i]);
            strcpy(nama[i],temp[0]);
            puts(nama[i]);
         }

    return 0;
}
