#ifndef INCLUDED_Circle_H
#define INCLUDED_Circle_H

#include "Figure.h"
using namespace std;

class Circle : public Figure {

private:

    double x, y, r;

public:


    double calc_area() const;
    
    double calc_perimeter() const;

    vector<double> calc_specdot() const;

    string calc_type() const;

    string calc_vyp()  const;

    Circle(double x, double y, double radius);
    
};
#endif