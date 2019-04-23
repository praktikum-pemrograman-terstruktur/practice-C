#include <stdio.h>

int  main(){
    int nilai;
    printf("masukkan nilai mahasiswa\n");
    scanf("%d", &nilai);

    if (nilai >90 && nilai < 100){
        printf ("grade nilai mahasiswa %d adalah A", nilai);
    } else if (nilai >70){
        printf("grade nilai mahasiswa %d adalah B", nilai);
    } else if (nilai >60){
        printf("grade nilai mahasiswa %d adalah C", nilai);
    }else if (nilai <60 && (nilai >=0)){
        printf("grade tidak dapat ditentukan");
    }else{
        printf("grade nilai mahasiswa %d adalah D",nilai);
    }
}