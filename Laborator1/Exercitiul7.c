#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    a = roundf(a * 100)/100;
    b = roundf(b * 100)/100;

    if( a != b) {
        printf("NOT EQ");
    }else {
        printf("EQ");
    }
// nu se poate 
    return 0;
}
