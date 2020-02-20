#include <iostream>
#include "Binary_Search.h"

int main(){
	BinarySearch b;
	b.insert_data(3);
	b.insert_data(5);
	b.insert_data(2);
	b.insert_data(1);
	b.insert_data(7);
	b.insert_data(9);
	b.insert_data(11);
	b.insert_data(14);
	b.insert_data(13);
	b.insert_data(10);
	b.display();
	
	if(b.Binary_Search(5)){
		std::cout<<"Found"<<std::endl;
	}
	else{
		std::cout<<"Not Found"<<std::endl;
	}

}
