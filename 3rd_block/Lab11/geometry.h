#ifndef GEOMETRY_H_INCLUDED
#define GEOMETRY_H_INCLUDED

#include "triangle.h"

struct Triangle FormStruct(int, int, int, int, int, int);

float vecLen(int, int, int, int);

float findSquare(float, float, float);
float findPerimetr(float, float, float);

#endif // GEOMETRY_H_INCLUDED
