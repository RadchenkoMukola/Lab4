#ifndef INCLUDED_Figure_H
#define INCLUDED_Figure_H

#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using std::string;
using std::vector;

class Figure {

public:

    virtual double calc_area() const = 0;
    virtual double calc_perimeter() const = 0;
    virtual vector<double> calc_specdot() const = 0;
    virtual string calc_type() const = 0;
    virtual string calc_vyp()  const = 0;
};
#endif
