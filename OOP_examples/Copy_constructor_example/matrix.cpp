 #include "matrix.h"
matrix::matrix(size_t w, size_t h)
{
    element = new double [w*h];
    width = w;
    height = h;
}
matrix::matrix(const matrix& element1)
{
    width = element1.width;
    height = element1.height;
    int size = width * height;
    element = new double[size];
    for(int i = 0; i < size; i++)
    element[i]=element1.element[i];
}
matrix& matrix::operator=(matrix& element1)
{
    int size = element1.width * element1.height;
    if(size > width * height)
    size = width * height;
    element = new double [size];
    for (int i = 0; i < size; i++)
    element[i] = element1.element[i];
    return *this;
}
double matrix::get_value(size_t i, size_t j)
{
    return element[i * width + j];
}
void matrix::set_value(size_t i, size_t j, double value)
{
    if((i < width) && (j < height)) element[i * width + j] = value;

}
matrix::~matrix()
{
    delete [] element;
}

