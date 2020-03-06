#include "exceptions_example.h"

out_of_area::out_of_area(size_t i):general_error("Out of range")
{this->i=i;}
overflow::overflow():general_error ("array overflow"){}
underflow::underflow():general_error ("array is empty"){}
arr::arr(size_t capacity) throw (general_error)
{
    if (capacity == 0) throw
            general_error("capacity of array is 0 ");
            this->capacity = capacity;
    size = 0;
    data = new double[capacity];
}
arr::~arr()
{
    delete [] data;
};
double arr :: operator[](size_t i) throw (out_of_area)
{
    if (i < size) return data[i];
    else throw out_of_area(i);
}
void arr::push(double v) throw (overflow)
{
   if (size < capacity) data[size++] = v;
   else throw overflow();
}
double arr::pop() throw (underflow)
{
    if (size > 0) return  data[size--];
    else throw underflow();
}
void main_loop(arr& a)
{
    char c;
    double v;
    size_t i;
    for (;;)
    {
        cout<<"Enter  + to add the item,"
        " -  to extract,  i\ to view"
        "i-th element,  a  to exit:"<<endl;
        cin >> c;
        try {
            switch(c){
            case '+':
                cout<<"Input number";
                cin >> v;
                a.push(v);
                break;
            case '-':
                v=a.pop();
                cout <<"Number extracted"<<v<<endl;
                break;
            case 'i':
                cout<<"Input index"<<endl;
                cin >> i;
                v = a[i];
                cout <<"required element"<<v<<endl;
                break;
            case 'a':
                return;
                break;
            }
        }
        catch(out_of_area& e)
        {
           cout << "Attempting to access an item with an invalid index"<<e.i<<endl;
           throw;
        }
        catch(underflow)
        {
          cout<<"Operation failed because array is empty"<<endl;
        }
    }

}
