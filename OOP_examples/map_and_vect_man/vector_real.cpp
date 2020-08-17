#include "pch.h"
#include "vector_real.h"

std::vector<int> vector_real::show_and_delete_vector()
{
    int temp;
    srand( time(NULL) );							//randomizer

	do
	{
		std::cout << "Input size of vector. You're not allowed to input negative value" << std::endl;
		std::cin >> vector_capacity;
	} 
	while (vector_capacity > 1000);


    std::vector<int> vect(vector_capacity);
    std::cout<<"vector content"<<std::endl;

    for(auto int_iter = vect.begin(); int_iter!=vect.end(); int_iter++){
        *int_iter = vector_element = 1 + rand() % range;					//filling vector by random numbers in range 1-9
        std::cout<<" "<<*int_iter;
    }
    std::cout<<std::endl;

	
    std::cout<<"How many elements do you want to delete?"<<std::endl;

    do
    {
        std::cout<<"You're allowed to input not more than 15 elements or less than vector capacity "<<std::endl;
        std::cin>>deleted_elements;
    }
    while((deleted_elements > 15) || (deleted_elements > vect.size()));		//limits of acceptable input values

    if(deleted_elements == vect.size()){
        vect.clear();
        for(auto int_iter = vect.begin(); int_iter!=vect.end(); int_iter++)			//print if vector is empty
        {
            std::cout<<" "<<*int_iter;
        }
    }

	if (deleted_elements == 0 && vect.size() == 0)
	{
		return vect;
	}


     vector_shift = 1 + rand() % vector_capacity;						//random value for deleting vector element by random index

     while(vect.size() != vector_capacity - deleted_elements){
         vect.erase(vect.begin() + vector_shift-1);							//deleting element by random index
         for(auto int_iter = vect.begin(); int_iter!=vect.end(); int_iter++){
            std::cout<<" "<<*int_iter;
         }
            std::cout<<std::endl;

            if(vector_shift < 0 || range >= 9){
                    range = vect.size();							
                    counter = 0;
                    vector_shift = rand() % (range - counter);					
                   }

            vector_shift =1 + rand() % (range - counter);						//part of code which one doesn't allow to move iterator out of range
            counter++;
      }


    std::cout<<"You've deleted "<<deleted_elements<<" elements"<<std::endl;
    std::cout<<"vector content now"<<std::endl;

        for(auto int_iter = vect.begin(); int_iter!=vect.end(); int_iter++){
            std::cout<<" "<<*int_iter;											//print vector after random deleting of elements by your choice
    }
        std::cout<<std::endl;
        return vect;
};

