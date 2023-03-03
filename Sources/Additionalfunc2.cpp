#include "Additionalfunc2.h"

bool riv(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, double x5, double y5)
{
    double a, b, c, t1, t2, t3;
    bool dat, dat1, dat2, dat3;

    a = y1 - y2;
    b = x2 - x1;
    c = x1 * y2 - x2 * y1;

    t1 = a * x3 + b * y3 + c;
    if (t1 < 0) dat1 = 0;
    else if (t1 > 0) dat1 = 1;
    t2 = a * x4 + b * y4 + c;
    if (t2 < 0) dat2 = 0;
    else if (t2 > 0) dat2 = 1;
    t3 = a * x5 + b * y5 + c;
    if (t3 < 0) dat3 = 0;
    else if (t3 > 0) dat3 = 1;

    if (dat1 == dat2 == dat3) dat = 1;
    else dat = 0;
    return dat;

}