#ifndef VIRTUAL_METHOD_H
#define VIRTUAL_METHOD_H

#endif // VIRTUAL_METHOD_H

#include <iostream>
#include <math.h>
using namespace std;

class vector
{
protected:
    double x,y;
public:
    vector(double x, double y){this->x = x; this->y = y;}
    virtual double abs(){return sqrt(x*x + y*y);}
    void info() {cout <<"vector module "<<abs()<<endl;}
    virtual ~vector()=default;
};
class spatial_vector: public vector
{
protected:
    double z;
public:
    spatial_vector(double x, double y, double z);
    double abs() {return sqrt(x*x +y*y + z*z);}
};
