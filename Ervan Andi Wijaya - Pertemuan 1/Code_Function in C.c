#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four (int a, int b, int c, int d){
    int hasil;
    if (a>b && a>c && a>d) hasil=a;
    if (b>a && b>c && b>d) hasil=b;
    if (c>a && c>b && c>d) hasil=c;
    if (d>a && d>b && d>c) hasil=d;
    return hasil;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

