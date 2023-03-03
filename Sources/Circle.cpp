#define _USE_MATH_DEFINES
#include "Circle.h"
#include <math.h>
#include <cmath>
using std::cout;

double Circle::calc_area() const
{
    double s;
    s = M_PI * r * r;
    return s;
}
double Circle::calc_perimeter() const
{
    double p;
    p = 2 * M_PI * r;
    return p;
}
vector<double>  Circle::calc_specdot() const
{
    vector<double> m;
    m.push_back(x);
    m.push_back(y);
    cout << "Центр кола ";
    return m;
}
string Circle::calc_type() const
{
    string s;
    s = "Коло";
    return s;
}
string Circle::calc_vyp()  const
{
    string s;
    s = "Опуклий";
    return s;
}
Circle::Circle(double x, double y, double radius)
: x(x), y(y), r(radius) {}