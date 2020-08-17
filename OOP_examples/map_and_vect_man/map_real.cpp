#include "pch.h"
#include "map_real.h"

std::map<int,int> map_real::show_and_delete_map()
{

    srand( time(NULL) );								//randomizer

	do
	{
		std::cout << "Input size of map. You're not allowed to input negative value" << std::endl;
		std::cin >> map_capacity;
	}
	while (map_capacity > 1000);

    for(int i = 0 ; i < map_capacity; i++){
        map_element++;										//filling map by random numbers in range 1-9
		maps[map_element] = 1+ rand() % range;
    }

    for(auto map_iter = maps.begin(); map_iter != maps.end(); map_iter++){			
        std::cout<< map_iter->first<< ", value "<<map_iter->second<<std::endl;		//map print
    }

    std::cout<<std::endl;
    std::cout<<"How many elements do you want to delete?"<<std::endl;

    do
    {
        std::cout<<"You're allowed to input not more than 15 elements or less than map capacity"<<std::endl;
        std::cin>>deleted_elements;
    }

    while(deleted_elements > 15 || deleted_elements > maps.size());						//limits of acceptable input values

    if(deleted_elements == maps.size()){
		maps.clear();
        std::cout<<"map content now"<<std::endl;
        for(auto map_iter = maps.begin(); map_iter != maps.end(); map_iter++){			//print if map is empty
            std::cout << ") Key " << map_iter->first<< ", value "<<map_iter->second<<std::endl;
        }
    }

    while(maps.size() != map_capacity-deleted_elements){
		maps.erase(1 + rand() % map_capacity);				//deleting element by random index 
    }

    auto map_iter = maps.begin();
    std::cout<<"You've deleted "<<deleted_elements<<" elements"<<std::endl;
    std::cout<<"map content now"<<std::endl;

    for(auto map_iter = maps.begin(); map_iter != maps.end(); map_iter++){
        std::cout<<map_iter->first<< ", value "<<map_iter->second<<std::endl;			//print map after random deleting of elements by your choice
    }

    std::cout<<std::endl;
    return maps;
}


