#ifndef EXCEPTIONS_EXAMPLE_H
#define EXCEPTIONS_EXAMPLE_H

#endif // EXCEPTIONS_EXAMPLE_H

#include <iostream>
using namespace std;

class general_error
{
    public:
     char const *message;
     general_error(char const *message) {this->message=message;}

};
class out_of_area: public general_error
{
   public:
    size_t i;
    out_of_area(size_t i);
};
class overflow: public general_error
{
   public:
    overflow();
};
class underflow: public general_error
{
   public:
    underflow();
};
class arr
{
   private:
    size_t size;
    size_t capacity;
    double *data;
   public:
    arr(size_t capacity) throw (general_error);
    ~arr();
    double operator[](size_t i) throw (out_of_area);
    void push(double v) throw (overflow);
    double pop() throw (underflow);
};
