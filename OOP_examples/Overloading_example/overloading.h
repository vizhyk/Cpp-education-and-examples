#ifndef OVERLOADING_H
#define OVERLOADING_H

#endif // OVERLOADING_H
#include <iostream >
using namespace  std;
class spatial_vector
{
    public:
    double x,y,z;

public:
    spatial_vector(double x=0, double y=0, double z=0);
    double abs() { return sqrt(x*x + y*y + z*z); }
    double get_x() { return x; }
    double get_y() { return y; }
    double get_z() { return z; }
    void set_x(double x){ this->x=x; }
    void set_y(double y){ this->y=y; }
    void set_z(double z){ this->z=z; }
    void info();
    spatial_vector& operator++();
    spatial_vector& operator--();
    spatial_vector operator++(int);
    spatial_vector operator--(int);
   friend spatial_vector& operator+(spatial_vector a, const  spatial_vector& b);
   friend spatial_vector& operator-(spatial_vector a, const spatial_vector& b);
   friend ostream& operator<<(ofstream& stream, const spatial_vector& b);
   friend istream& operator>>(ofstream& stream, spatial_vector& b);
};
