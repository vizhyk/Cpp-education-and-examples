#ifndef VECTOR_REAL_H
#define VECTOR_REAL_H

#endif // VECTOR_REAL_H


#include <vector>
#include <iostream>
#include <ctime>

class vector_real
{
private:
    unsigned int vector_capacity = 0;
    unsigned int vector_element = 0;
    unsigned int deleted_elements = 0;
    unsigned int vector_shift = 0;
    unsigned int counter = 0;
    unsigned int range = 9;


public:
	std::vector<int> vect;
    std::vector<int> show_and_delete_vector();

};

