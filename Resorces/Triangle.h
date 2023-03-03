#ifndef INCLUDED_Triangle_H
#define INCLUDED_Triangle_H


#include "Figure.h"

class Triangle : public Figure {

private:

    double x1, y1, x2, y2, x3, y3;

public:

    double calc_area() const;

    double calc_perimeter() const;

    string calc_type() const;

    vector<double> calc_specdot() const;

    string calc_vyp() const;

    Triangle(double x1, double y1, double x2, double y2, double x3, double y3);
};
#endif