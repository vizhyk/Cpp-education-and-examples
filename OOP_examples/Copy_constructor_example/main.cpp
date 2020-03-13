#include "matrix.cpp"

int main()
{
   matrix a(2,2);
   a.set_value(0,0,100);
   matrix b = a;
   b.set_value(0,0,200);
   cout<<"a[0,0]=" << a.get_value(0,0)<< ";" << "b[0,0] ="<<a.get_value(0,0)<<endl;
    return 0;
}
