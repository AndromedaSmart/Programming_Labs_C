#include <stdio.h>
#include <stdlib.h>
#include "triangle.h"
#include "geometry.h"
#include "point.h"

int main()
{
int Ax;
    int Ay;
    int Bx;
    int By;
    int Cx;
    int Cy;

    printf("Ax = ");
    scanf("%d", &Ax);
    printf("Ay = ");
    scanf("%d", &Ay);
    printf("Bx = ");
    scanf("%d", &Bx);
    printf("By = ");
    scanf("%d", &By);
    printf("Cx = ");
    scanf("%d", &Cx);
    printf("Cy = ");
    scanf("%d", &Cy);

    struct Triangle tr = FormStruct(Ax, Ay, Bx, By, Cx, Cy);

    float AB = vecLen(tr.A.x, tr.A.y, tr.B.x, tr.B.y);
    float BC = vecLen(tr.B.x, tr.B.y, tr.C.x, tr.C.y);
    float AC = vecLen(tr.A.x, tr.A.y, tr.C.x, tr.C.y);

    printf("Perimeter of Triangle = %.2f\n",
           findPerimetr(AB, BC, AC));
    printf("Square of Triangle = %.2f\n",
           findSquare(AB, BC, AC));

    return 0;
}
