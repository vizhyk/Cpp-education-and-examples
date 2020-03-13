#ifndef MATRIX_H
#define MATRIX_H

#endif // MATRIX_H
#include <iostream>
using namespace std;

class matrix
{
private:
 double *element;
 size_t height,width;
public:
 matrix(size_t w, size_t h);
 matrix(const matrix& element1);
 matrix& operator=(matrix& element1);
 double get_value(size_t i, size_t j);
 void set_value(size_t i, size_t j, double value);
 ~matrix();
};
