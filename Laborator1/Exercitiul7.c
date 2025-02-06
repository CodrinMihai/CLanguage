#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;

    scanf("%f", &a);
    scanf("%f", &b);

    int c = (int) (a * 10000);
    int d = (int) (b * 10000);

    if( c  == d ) {
        printf("EQ");
    }else{
        printf("NOT EQ");
    }

    return 0;
}
