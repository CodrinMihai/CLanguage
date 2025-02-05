#include <stdio.h>

int main() {
    int a, b;


    scanf("%d %d", &a, &b);
    float adunare = a +b;
    float diferenta = a - b;
    float medie = adunare / 2;

    printf(" Adunarea numerelor este %.5f \n", adunare);
    printf(" Diferenta numerelor este %.5f \n", diferenta);
    printf(" Media numerelor este %.5f \n", medie);
    return 0;
   
};