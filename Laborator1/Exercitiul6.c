
#include <math.h>
#include <stdio.h>


int main()
{
    long double a = -123;
    long double b = 789;

    double res;

    res = fabs(a);
    printf("Valoarea absoluta a numarului %.4lf is %.4lf\n", a , res);

    res = fabs(b);
    printf("Valoarea absoluta a numarului %.4lf is %.4lf\n", b , res);
    
    
    return 0;
}
