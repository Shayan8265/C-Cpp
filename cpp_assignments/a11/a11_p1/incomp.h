#include <string>

#ifndef BOX_H
#define BOX_H
class BOX 
{
    private:
    double height;
    double width;
    double depth;

    public:
    BOX();
    BOX(double h, double w, double d);
    BOX(const BOX& h, const BOX& w, const BOX& d);
    ~BOX();
    double getheight();
    double getwidth();
    double getdepth();
    void setheight(double val) {height = val;}
    void setwidth(double val) {width = val;}
    void setdepth(double val) {depth = val;}
    double vlolume(); 
};
#endif