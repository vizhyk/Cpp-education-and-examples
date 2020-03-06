#include <iostream >
#include <math.h>
using namespace std ;

class spatial_vector
{
private:
    double x,y,z;

public:
    spatial_vector(double x, double y, double z){this->x=x; this ->y=y; this->z=z;}
    double get_x(){return x;}
    double get_y(){return y;}
    double get_z(){return z;}
    void set_x(double x){this->x=x;}
    void set_y(double y){this->y=y;}
    void set_z(double z){this->z=z;}
    void info(){cout <<"vector coodinates:"<<x<<" "<<y<<" "<<z<<endl;}
};
spatial_vector operator+(spatial_vector a, spatial_vector b)
{
    spatial_vector c(0,0,0);
   c.set_x(a.get_x()+b.get_x());
   c.set_y(a.get_y()+b.get_y());
   c.set_z(a.get_z()+b.get_z());
            return c;
}



  int main ( )
{
spatial_vector a(1,2,3), b(10,20,30), c(0,0,0);
c = a+b;
c.info();
}
