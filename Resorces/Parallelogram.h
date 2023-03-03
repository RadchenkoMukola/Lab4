#ifndef INCLUDED_Parallelpgram_H
#define INCLUDED_Parallelpgram_H

#include "Figure.h"

class Parallelogram : public Figure {

private:

    double xa, ya, xb, yb, xc, yc, xd, yd;

public:

    double calc_area()  const;
  
    double calc_perimeter() const;
 
    string calc_type() const;
    
    vector<double> calc_specdot() const;
    
    string calc_vyp() const;
    
    Parallelogram(double a, double b, double c, double d, double e, double f, double g, double h);

};
#endif