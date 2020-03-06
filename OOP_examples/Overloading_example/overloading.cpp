#include "overloading.h"

spatial_vector::spatial_vector(double x1, double y1,double z1)
{
    x=x1;
    y=y1;
    z=z1;

}
void spatial_vector::info()
{
    cout<<"Vector coordinates: x="<<x<<" "<<"y="<<y<<" "<<"z="<<z<<endl;
    cout<<"Vector module"<<abs()<<endl;

}
spatial_vector& spatial_vector::operator++()
{
    x++; y++; z++;
    return *this;

}
spatial_vector& spatial_vector::operator--()
{
    x--; y--; z--;
    return *this;

}
spatial_vector spatial_vector::operator++(int)
{
    spatial_vector temp=*this;
    ++(*this);
    return  temp;
}
spatial_vector spatial_vector::operator--(int)
{
    spatial_vector temp=*this;
    --(*this);
    return  temp;
}
spatial_vector& operator+(spatial_vector a, const spatial_vector& b)
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;

    return  a;
}
spatial_vector& operator-(spatial_vector a, const spatial_vector& b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;

    return  a;
}
ostream& operator<<(ostream& stream, const spatial_vector& b)
{
    stream <<"x="<<b.x<<" "<<"y="<<b.y<<" "<<"z="<<b.z<<endl;
    return stream;
}
istream& operator>>(istream& stream,  spatial_vector& b)
{
    stream >>b.x>>b.y>>b.z;
    return stream;
}
