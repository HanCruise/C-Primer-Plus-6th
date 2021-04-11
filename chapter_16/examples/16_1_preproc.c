/* preproc.c -- 简单的预处理示例 */
#include <stdio.h>

#define TWO 2
#define OW "Consistensy is the last refuge of the unimagina\
tive. - Oscar Wilde"    /* 反斜杠把该定义延续到下一行 */

#define FOUR TWO*TWO
#define PX printf("X is %d.\n", x)
#define FMT "X is %d.\n"

int main(void)
{
    int x = TWO;

    PX;    // x is 2.
    x = FOUR;
    printf(FMT, x);         // x is 4.
    printf("%s\n", OW);     // Consistensy is the last refuge of the unimaginative. - Oscar Wilde
    printf("TWO: OW\n");    // TWO: OW

    return 0;
}