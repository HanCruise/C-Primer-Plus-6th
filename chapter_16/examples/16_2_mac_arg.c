/* mac_arg.c -- 带参数的宏 */
#include <stdio.h>

#define SQUARE(X) X*X
#define PR(X) printf("The result is %d.\n", X)

int main(void)
{
    int x = 5;
    int z;

    printf("x = %d\n", x);    // 5

    z = SQUARE(x);
    printf("Evaluating SQUARE(x): ");
    PR(z);    // 25

    z = SQUARE(2);
    printf("Evaluating SQUARE(2): ");
    PR(z);    // 4

    printf("Evaluating SQUARE(x+2): ");
    PR(SQUARE(x + 2));    // 17

    printf("Evaluating 100/SQUARE(2): ");
    PR(100 / SQUARE(2));    // 100

    printf("x is %d.\n", x);    // 5

    printf("Evaluating SQUARE(++x): ");
    PR(SQUARE(++x));    // 49

    printf("After incrementing, x is %x.\n", x);    // 7

    return 0;
}