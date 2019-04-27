#include <stdio.h>
#include <string.h>
 
int main() {
    char nama [4][100];
    strcpy(nama[0],"Roychatul Jannah");
    strcpy(nama[1],"Dinda Maulidiah");
    strcpy(nama[2],"Azarine Aisyah");
    strcpy(nama[3],"Ayum Septyorini");
    strcpy(nama[4],"Rizqi Amalia");
    strcpy(nama[5],"Mazidatun Nahdia");
    strcpy(nama[6],"Maria Pramundhitya");
    
    
     
    for(int i=0;i<7;i++){
 
            int j,bd;
            j=i;
            for(int k=i+1;k<7;k++)
            {
                    bd=strcmp(nama[j],nama[k]);
                    if(bd==1) j=k;        /* angka 1 merupakan urut data secara ascending, untuk descending ganti dengan -1 */
                    }
                                if(j!=i){
                             char temp[1][100]; /* Swapping */
                             strcpy(temp[0],nama[j]);
                             strcpy(nama[j],nama[i]);
                             strcpy(nama[i],temp[0]);}
                    }
     
    for (int i=0;i<7;i++){ /* Menampilkan hasil */
        puts(nama[i]);
        }
    getchar();
    return 0;
}