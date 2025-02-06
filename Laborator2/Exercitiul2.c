#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

	// Method 1
    // true if num is perfectly divisible by 2

    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);

	// Method 2
	
		int x;
    for (x = 0; x < 10; x++)
        if (x & 1)
            printf("%d is odd\n", x);
    return 0;
}
