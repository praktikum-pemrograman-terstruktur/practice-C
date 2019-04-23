#include <stdio.h>

int main (){
    int n, i, sum;
    printf("masukkan nilai suatu bilangan n = \n");
    scanf("%d", &n);
    sum=0;
    for (i=1; i<=n; i++){
        sum = sum + i;
    }
    printf("nilai dari deret %d adalah %d", n, sum);
}