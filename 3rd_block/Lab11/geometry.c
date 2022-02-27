#include <math.h>
#include "triangle.h"
#include "geometry.h"

float vecLen(int x1, int y1, int x2, int y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

float findSquare(float a, float b, float c)
{
    float pp = (a + b + c) / 2;
    return sqrt(pp * (pp - a) * (pp - b) * (pp - c));
}

float findPerimetr(float a, float b, float c)
{
    return a + b + c;
}

struct Triangle FormStruct(int ax, int ay,
                           int bx, int by,
                           int cx, int cy)
{
    struct point a;
    a.x = ax;
    a.y = ay;

    struct point b;
    b.x = bx;
    b.y = by;

    struct point c;
    c.x = cx;
    c.y = cy;

    struct Triangle trio;
    trio.A = a;
    trio.B = b;
    trio.C = c;

    return trio;
};
