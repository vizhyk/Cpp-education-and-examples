#ifndef SYNCHRO_REAL_H
#define SYNCHRO_REAL_H

#endif // SYNCHRO_REAL_H


#include "map_real.h"
#include "vector_real.h"
#include <algorithm>

class synchro_real: public map_real, public vector_real                 
{
public:
	std::vector<int> get_values_from_map(std::map<int, int>& maps);
	std::vector<int> find_common_values(std::vector<int> first_vector_nums, std::vector<int> second_vector_nums);
	void synchronize_vector(std::vector<int>& nums, std::vector<int> const& common_values);
	void synchronize_map(std::map<int, int>& nums, std::vector<int> const& common_values);
	void synchronize_containers(std::vector<int>& vect, std::map<int, int>& maps);
};

