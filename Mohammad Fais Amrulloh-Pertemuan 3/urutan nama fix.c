#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>


main(){
    
    int i, j, n; int ban;
    char nama[100][100];
    printf("masukkan jumlah data = ");
    scanf("%d\n", &n);
    printf("masukkan nama\n");
    for(i=0; i<n; i++)
    scanf("%[^n]%*c", &nama[i]);
    printf("\n");
    for(i=0; i<n; i++){
        j=i;
        for(int x=i+1; x<n; x++){
            ban=strcmp(nama[j], nama[x]);
            if(ban==1) j=x;
        }
        if(j!=i){
            char temp[1][30];
            strcpy(temp[0], nama[j]);
            strcpy(nama[j], nama[i]);
            strcpy(nama[i], temp[0]);
        }
    }
    printf("Nama yang telah diurutkan :\n");
    for(i=0; i<n; i++){
        printf("%s\n", nama[i]);
    }
     getchar();
    return 0;
}