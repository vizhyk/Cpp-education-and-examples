
#include "pch.h"
#include "synchro_real.h"

int main()
{
    vector_real obj1;
    map_real obj2;													//creating class objects
	synchro_real obj3;

	std::vector<int> vect = obj1.show_and_delete_vector();
	std::map<int,int> maps = obj2.show_and_delete_map();			//method call
	obj3.synchronize_containers(vect,maps);


    std::cout<<std::endl;

    std::cout<<"size "<<vect.size()<<std::endl;
    for(auto vect_iter = vect.begin(); vect_iter!=vect.end(); vect_iter++){
        std::cout<<" "<<*vect_iter;
    }
    std::cout<<std::endl;

    std::cout<<"map "<<maps.size()<<std::endl;
    for(auto maps_iter = maps.begin(); maps_iter!=maps.end(); maps_iter++){
           std::cout<<" "<<maps_iter->second;
    }

    return 0;
}

