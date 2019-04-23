#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    return(((a>b?a:b)>c?(a>b?a:b):c)>d?((a>b?a:b)>c?(a>b?a:b):c):d);
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d\n", ans);
    
    return 0;
}

