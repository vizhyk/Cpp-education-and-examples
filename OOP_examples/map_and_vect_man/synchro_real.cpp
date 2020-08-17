#include "pch.h"
#include "synchro_real.h"

std::vector<int> synchro_real::get_values_from_map(std::map<int, int>& maps) {
	std::vector<int> values;
	transform(
		maps.begin(),
		maps.end(),					//for_each loop that copies the return value of an element into an output sequence.
		back_inserter(values),
		[](const std::map<int, int>::value_type &pair) {return pair.second; } //lambda function which one return second integer map argument
	);
	return values;		//return vector which is contain second integer arguments of map
}

std::vector<int> synchro_real::find_common_values(std::vector<int> first_vector_nums, std::vector<int> second_vector_nums) {
	std::vector<int> result(first_vector_nums.size() + second_vector_nums.size());

	sort(first_vector_nums.begin(), first_vector_nums.end());				//sorting vector
	sort(second_vector_nums.begin(), second_vector_nums.end());				//sorting map

	std::vector<int>::iterator end;

	end = set_intersection(    //finding objects with which there is an intersection
		first_vector_nums.begin(), first_vector_nums.end(),				
		second_vector_nums.begin(), second_vector_nums.end(),		
		result.begin());
	result.erase(end, result.end()); //deleting common elements
	return result;
}

void synchro_real::synchronize_vector(std::vector<int>& nums, std::vector<int> const& common_values) {
	for (auto it = nums.begin(); it != nums.end();){
		if (find(common_values.begin(), common_values.end(), *it) == common_values.end())
			it = nums.erase(it);
		else
			++it;
	}
}

void synchro_real::synchronize_map(std::map<int, int>& nums, std::vector<int> const& common_values) {
	for (auto it = nums.begin(); it != nums.cend();){
		if (find(common_values.begin(), common_values.end(), it->second) == common_values.end())
			it = nums.erase(it);
		else
			++it;
	}
}

void synchro_real::synchronize_containers(std::vector<int>& vect, std::map<int, int>& maps) {
	std::vector<int> map_values = get_values_from_map(maps);
	std::vector<int> common_nums = find_common_values(vect, map_values);
	synchronize_vector(vect, common_nums);
	synchronize_map(maps, common_nums);
}
