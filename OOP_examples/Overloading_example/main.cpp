#include "overloading.cpp"

  int main ( )
{
    spatial_vector a, b(1,2,3);
    cout<<"Filling a vector through standard input"<<endl;
    cout<<"Input Vector coodrinates"<<endl;
    cin >> a;
    a.info();
    cout<<"Subtraction of vectors "<<endl;
    spatial_vector c = a - b;
    cout<<"Vector coordinates " << c;
    cout<<"change of coordinates with getters and setters"<<endl;
    c.set_x(c.get_x()+5);
    c.set_y(c.get_y()+5);
    c.set_z(c.get_z()+5);
    cout << "x coordinates after increment, vector c coordinates: " << c ;
    cout << " Increment output c++: " << c++<<endl;
    cout << "Output ++c: " << ++c ;
}
