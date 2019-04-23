#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>b && a>c && a>d)
    printf("%d", a);
    if(b>a && b>c && b>d)
    printf("%d", b);
    if(c>d && c>a && c>d)
    printf("%d", c);
    if(d>b && d>c && d>a)
    printf("%d", d);
    
    return 0;
}
