#include "Additionalfunc1.h"

double calculate_triangle(double x, double x0, double x1, double y, double y0, double y1)
{
    double s = (x - x0) * (y1 - y0) - (y - y0) * (x1 - x0);
    return  s;
}
