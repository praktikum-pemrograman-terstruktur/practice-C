/*
for loop
----------------------------------------
for (init; kondisi; increament){
    statement;
}
---------------------------------------

for (i = 0; i < 5; i++){
    
}

==========================================
do while loop

do{
    statement;
    increament
} while (kondisi)

-----------------------------------------
do {
    printf("Hello world");
    i++; atau i = i + 1; atau i += 1
} while (i < 5)

=========================================
while loop

init;
while (kondisi){
    statement;
    increament
}
---------------------------------------
implementasi:

i = 0;
while(i < 5){
    printf("hello world");
    i++;
}

contoh kasus looping:

deret : 1, 2, 3, 4, 5, 6, ..., n
jumlah deret?
0   ---> 0
1   ---> 0 + 1
2   ---> 0 + 1 + 2
3   ---. 0 + 1 + 2 + 3

10   ---. 0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 +10
10  ----> 
.
.
n   ---> 0 + 1 + 2 + 3 + ... + n
*/

#include <stdio.h>

int main (){
    int n, i, sum;

    printf("masukkan nilai suatu bilangan n : \n");
    scanf("%d", &n);

    sum = 0;
    for (i = 1; i <= n; i++){
        sum = sum + i;
    }

    printf("nilai dari deret %d adalah %d", n, sum);
}

