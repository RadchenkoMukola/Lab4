
#include "Triangle.h"

using std::cout;

    double Triangle::calc_area() const
    {
        double s = fabs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1)) / 2.0;
        return s;
    }

    double Triangle::calc_perimeter() const {
        double p;
        p = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) + sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2)) + sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
        return p;
    }
    string Triangle::calc_type() const
    {
        int t, a, b, c;
        string s;
        a = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
        b = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
        c = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));

        if (a <= b + c && b <= a + c && c <= b + a)
        {
            if (a == b + c || b == c + a || c == a + b || a == 0 || b == 0 || c == 0)
                t = 1;
            else if (a == b && b == c && c == a)
                t = 2;
            else if (a == b ^ b == c ^ c == a)
                t = 3;
            else t = 4;
        }
        else t = 0;
        if (t == 1)
        {
            s = "Трикутник нульової площі";
        }
        else if (t == 2)
        {
            s = "Рівностороній";

        }
        else if (t == 3)
        {
            s = "Рівнобедрений";
        }
        else if (t == 4)
        {
            s = "Різностороній";
        }
        else if (t == 0)
        {
            s = "Не трикутник";
        }
        return s;
    }

    vector<double> Triangle::calc_specdot() const
    {
        vector<double> m;
        double xm, ym;
        double d = 2 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
        xm = ((x1 * x1 + y1 * y1) * (y2 - y3) + (x2 * x2 + y2 * y2) * (y3 - y1) + (x3 * x3 + y3 * y3) * (y1 - y2)) / d;
        ym = ((x1 * x1 + y1 * y1) * (x3 - x2) + (x2 * x2 + y2 * y2) * (x1 - x3) + (x3 * x3 + y3 * y3) * (x2 - x1)) / d;
        m.push_back(xm);
        m.push_back(ym);
        cout << "Центр вписаного кола ";
        return m;
    }
    string Triangle::calc_vyp() const {
        string s;
        s = "Опуклий";
        return s;
    }

    Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
        : x1(x1), y1(y1), x2(x2), y2(y2), x3(x3), y3(y3) {}

