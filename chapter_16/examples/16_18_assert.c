/* assert.c -- 使用 assert() */
#include <stdio.h>
#include <math.h>
#include <assert.h>

int main(void)
{
    double x, y, z;

    puts("Enter a pair of numbers (0 0 to quit): ");
    while ((2 == scanf("%lf%lf", &x, &y))
        && (0 != x || 0 != y))
    {
        z = x * x - y * y;    // 应该用 +
        assert(z >= 0);
        printf("answer is %lf\n", sqrt(z));
        puts("Next pair of numbers: ");
    }
    puts("Done");

    return 0;
}