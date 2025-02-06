#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);
    // pentru S1
    int x, y;
    x = a *(a + 1);
    y = x / 2;
// pentru S2 
    int w, z;
    w = x * (2 * a + 1);
    z = w / 6;

    printf("Numere sunt %d \n,", y);
    printf("Respectiv %d", z);
    return 0;
}
