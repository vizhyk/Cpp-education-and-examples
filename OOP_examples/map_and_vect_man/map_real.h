#ifndef MAP_REAL_H
#define MAP_REAL_H

#endif // MAP_REAL_H

#include <map>
#include <iostream>
#include <ctime>

class map_real
{
private:
    unsigned int map_capacity = 0;
    unsigned int map_element = 0;
    unsigned int deleted_elements = 0;
	unsigned int range = 9;


public:
	std::map<int, int> maps;
    std::map<int,int>show_and_delete_map();
};

