#include <stdio.h>
#include <string.h>
 
int main() {
    char nama [3][30];
    strcpy(nama[0],"Nailur Rochman");
    strcpy(nama[1],"Wardah Nafisah");
    strcpy(nama[2],"Abdul Aziz");
     
    for(int i=0;i<3;i++){
            int j,bd;
            j=i;
            for(int k=i+1;k<3;k++)
            {
                    bd=strcmp(nama[j],nama[k]);
                    if(bd==1) j=k;        /* angka 1 merupakan urut data secara ascending, untuk descending ganti dengan -1 */
                    }
                                if(j!=i){
                             char temp[1][30]; /* Swapping */
                             strcpy(temp[0],nama[j]);
                             strcpy(nama[j],nama[i]);
                             strcpy(nama[i],temp[0]);}
                    }
     
    for (int i=0;i<3;i++){ /* Menampilkan hasil */
        puts(nama[i]);
        }
    getchar();
    return 0;
}
