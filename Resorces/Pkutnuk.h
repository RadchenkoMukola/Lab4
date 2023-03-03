#ifndef INCLUDED_Pkutnuk_H
#define INCLUDED_Pkutnuk_H

#include "Figure.h"

class Pkutnuk : public Figure {

private:
    double xa, ya, xb, yb, xc, yc, xd, yd, xe, ye;

public:

    double calc_area()  const;

    double calc_perimeter() const;

    string calc_type() const;

    vector<double> calc_specdot() const;
 
    string calc_vyp() const;

    Pkutnuk(double a, double b, double c, double d, double e, double f, double g, double h, double i, double j);

};
#endif
