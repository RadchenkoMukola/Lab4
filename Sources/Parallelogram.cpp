#include "Parallelogram.h"
#include "Additionalfunc1.h"

using std::cout;



    double Parallelogram::calc_area()  const
    {
        double S;
        S = (abs((xa - xb) * (ya + yb) + (xb - xc) * (yb + yc) + (xc - xd) * (yc + yd) + (xd - xa) * (yd + ya))) / 2;
        return S;
    }
    double Parallelogram::calc_perimeter() const
    {
        double a, b, c, d;
        a = sqrt(pow((xa - xb), 2) + pow((ya - yb), 2));
        b = sqrt(pow((xb - xc), 2) + pow((yb - yc), 2));
        c = sqrt(pow((xc - xd), 2) + pow((yc - yd), 2));
        d = sqrt(pow((xd - xa), 2) + pow((yd - ya), 2));
        double per = a + b + c + d;
        return per;
    }
    string Parallelogram::calc_type() const
    {
        string s;
        int t = 0;
        long double l = abs(sqrt((xc - xa) * (xc - xa) + (yc - ya) * (yc - ya)));
        long double m = abs(sqrt((xd - xb) * (xd - xb) + (yd - yb) * (yd - yb)));
        if (((xc - xb) * (yd - ya) == (xd - xa) * (yc - yb)) || ((xb - xa) * (yc - yd) == (xc - xd) * (yb - ya)))
        {
            if (((xb - xa) * (yc - yd) == (xc - xd) * (yb - ya)) && ((xc - xb) * (yd - ya) == (xd - xa) * (yc - yb)))
                if (l == m)
                {
                    t = 1;
                }
                else {
                    t = 2;
                }
            else {
                t = 3;
            }
        }
        else {
            t = 4;
        }
        if (t == 1)
        {
            s = "Прямокутник";
        }
        else if (t == 2)
        {
            s = "Паралелограмм";
        }
        else if (t == 3)
        {
            s = "Трапеція";
        }
        else if (t == 4)
        {
            s = "Довільний чоририкутник";
        }
        return s;
    }
    vector<double> Parallelogram::calc_specdot() const
    {
        float n;
        double a = 0, b = 0;
        vector<double> m;
        if (yc - ya != 0)
        {
            float q = (xc - xa) / (ya - yc);
            float sn = (xb - xd) + (yb - yd) * q;
            float fn = (xb - xa) + (yb - ya) * q;
            n = fn / sn;
        }
        else {
            if (!(yb - yd))
                n = (yc - ya) / (yc - yd);
        }
        a = xb + (xd - xb) * n;
        b = yb + (yd - yb) * n;
        m.push_back(a);
        m.push_back(b);
        cout << "Центр Перетину діагоналей ";
        return m;

    }

    string Parallelogram::calc_vyp() const
    {
        string s;
        double	l = calculate_triangle(xc, xb, xa, yc, yb, ya);
        double  m = calculate_triangle(xd, xb, xa, yd, yb, ya);
        if (l * m < 0) {
            s = "Не опуклий";
            return s;

        }
        double q, w;
        q = calculate_triangle(xa, xc, xb, ya, yc, yb);
        w = calculate_triangle(xd, xc, xb, yd, yc, yb);
        if (q * w < 0)
        {
            s = "Не опуклий";
            return s;
        }
        double p, r;
        p = calculate_triangle(xa, xd, xc, ya, yd, yc);
        r = calculate_triangle(xb, xd, xc, yb, yd, yc);
        if (p * r < 0) {
            s = "Не опуклый";
            return s;
        }
        double j, k;
        j = calculate_triangle(xb, xa, xd, yb, ya, yd);
        k = calculate_triangle(xc, xa, xd, yc, ya, yd);
        if (j * k < 0) {
            s = "Не опуклый";
            return s;
        }

        s = "Опуклый";
        return s;
    }


    Parallelogram::Parallelogram(double a, double b, double c, double d, double e, double f, double g, double h)
        : xa(a), ya(b), xb(c), yb(d), xc(e), yc(f), xd(g), yd(h) {}

