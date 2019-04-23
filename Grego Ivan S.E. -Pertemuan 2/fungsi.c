#include <stdio.h>

int main (){
    int n, panggil_fungsi;
    printf("masukkan nilai suatu bilangan n = \n");
    scanf("%d", &n);
    panggil_fungsi = deret (n);
    
    printf("nilai dari deret %d adalah %d", n);
}

//membuat fungsi jumlah deret ke n

int deret (int n){
    int sum, i;
    sum =0;
    for(i=1; i<=n; i++)
        sum = sum + 1;
    
    return sum;
}