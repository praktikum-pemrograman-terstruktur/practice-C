#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int x, y;
float a, b;

int main()
{   int i,j;
    float k,l;
    scanf ("%d %d \n", &i, &j);
    scanf ("%f %f", &k, &l);
    x=i+j;
    y=i-j;
    a=k+l;
    b=k-l;
    printf("%d %d\n", x, y);
    printf("%.1f %.1f", a, b);


	
    
    return 0;
}
