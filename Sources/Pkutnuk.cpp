#include "Pkutnuk.h"
#include "Additionalfunc2.h"

using std::cout;

double Pkutnuk::calc_area()  const
     {
       double S;
       S = (abs((xa - xb) * (ya + yb) + (xb - xc) * (yb + yc) + (xc - xd) * (yc + yd) + (xd - xe) * (yd + ye) + (xe - xa) * (ye - ya))) / 2;
       return S;
     }
    double Pkutnuk::calc_perimeter() const
     {
       double a , b , c , d , e;
          a = sqrt(pow((xa - xb),2) + pow((ya - yb),2));
          b = sqrt(pow((xb - xc),2) + pow((yb - yc),2));
          c = sqrt(pow((xc - xd),2) + pow((yc - yd),2));
          d = sqrt(pow((xd - xe),2) + pow((yd - ye),2));
          e = sqrt(pow((xe - xa),2) + pow((ye - ya),2));
        double per = a + b + c + d + e;
        return per;
     }
      string Pkutnuk::calc_type() const
    {
      string s;
       s = "П'ятикутник";
      return s;
      }


      vector<double> Pkutnuk::calc_specdot() const
      {
        double xm = 0,ym = 0;
        vector<double> m;
        xm = (xa + xb + xc + xd + xe) / 5;
        ym = (ya + yb + yc + yd + ye) / 5;
        m.push_back(xm);
        m.push_back(ym);
        cout << "Центр мас п'ятикутника ";
        return m;
      }
    string Pkutnuk::calc_vyp() const
     {
       bool a,b,c,d,e;
       string s;

       if (riv(xa,ya,xb,yb,xc,yc,xd,yd,xe,ye) == riv(xb,yb,xa,ya,xc,yc,xd,yd,xe,ye) == riv(xc,yc,xb,yb,xa,ya,xd,yd,xe,ye) ==
       riv(xd,yd,xb,yb,xc,yc,xa,ya,xe,ye) == riv(xe,ye,xb,yb,xc,yc,xd,yd,xa,ya))
       {
         s = "Опуклий";
       }
       else s = "Не опуклий";
       return s;
    }


    Pkutnuk::Pkutnuk(double a, double b, double c, double d, double e, double f, double g, double h,double i,double j)
            : xa(a),ya(b), xb(c),yb(d),xc(e),yc(f),xd(g),yd(h),xe(i),ye(j) {}
