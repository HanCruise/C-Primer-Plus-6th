/* rect_pol.c -- 把直角坐标转换为极坐标 */
#include <stdio.h>
#include <math.h>

// 把弧度转换为度，只需将弧度值乘以180，再除以 pi 即可。
// pi 的值通过计算表达式 4*atan(1)得到。
#define RAD_TO_DEG (180 / (4 * atan(1)))

typedef struct polar_v
{
    double magnitude;
    double angle;
} Polar_V;

typedef struct rect_v
{
    double x;
    double y;
} Rect_V;

Polar_V rect_to_polar(Rect_V);

int main(void)
{
    Rect_V  input;
    Polar_V result;

    puts("Enter x and y coordinates; enter q to quit:");
    while (2 == scanf("%lf %lf", &input.x, &input.y))
    {
        result = rect_to_polar(input);
        printf("magnitude = %0.2f, angle = %0.2f\n",
            result.magnitude, result.angle);
    }
    puts("Bye.");

    return 0;
}

Polar_V rect_to_polar(Rect_V rv)
{
    Polar_V pv;

    pv.magnitude = sqrt(rv.x * rv.x + rv.y * rv.y);
    if (0 == pv.magnitude)
        pv.angle = 0.0;
    else
        pv.angle = RAD_TO_DEG * atan2(rv.y, rv.x);

    return pv;
}