#include <stdio.h>

//menyelesaikan bilangan lebih kecil dari 10
// tanda untuk menyatakan kondisi:
/*
lebih besar dari >
lebih kecil dari <
lebih kecil sama dengan =<
lebih besar sama dengan =>
sama dengan ==

0 < x < 5

(0 < x) && (x < 5)
 or ||
 and &&

contoh kasus:
 menentukan bilangan ganjil dan genap

 kondisi ganjil : bilangan mod 2 hasilnya 1 (bilangan % 2 == 1)
 kondisi genap  : bilangan mod 2 hasilnya 0 (bilangan % 2 == 0)

 contoh kasus kondisi lebih dari 2 :
 grade A jika mahasiswa mendapatkan nilai dari 90-100  (90 >= nilai <=100) | (nilai > 90)
 grade B jika mahasiswa mendapatkan nilai dari 70-89   (70 >= nilai <=89)  | (nilai > 70)
 grade C jika mahasiswa mendapatkan nilai dari 60-69   (60 >= nilai <=69)  | (nilai > 60)
 grade D jika mhasiswa mendapatkan nilai dari < 60      (nilai < 60)       | (nilai < 60)
*/

int main(){
    int nilai;
    
    printf("masukkan nilai mahasiswa\n");
    scanf("%d", &nilai);

    if (nilai > 90 && nilai < 100){
        printf("grade nilai mahasiswa %d adalah A", nilai );
    } else if (nilai > 70){
        printf("grade nilai mahasiswa %d adalah B", nilai );
    } else if (nilai > 60){
        printf("grade nilai mahasiswa %d adalah C", nilai );
    } else if ((nilai < 60) && (nilai >= 0)){
        printf("grade nilai mahasiswa %d adalah D", nilai );
        
    } else{
        printf("nilai tidak ada dalam range");
    }
}
