#include <iostream>

#define MAX_SIZE 10

class BinarySearch{
	private:
		int element[MAX_SIZE];
		
	public:
		BinarySearch();
		~BinarySearch();
		void insert_data(int data);
		bool Binary_Search(int data);
		void display();
};

BinarySearch::BinarySearch(){
	for(int i=0;i<MAX_SIZE;i++){
		element[i]=0;
	}
}

BinarySearch::~BinarySearch(){
	
}

void BinarySearch::insert_data(int data){
	int index=0;
	while(index<MAX_SIZE){
		if (element[index]==0){
			element[index]=data;
			break;
		}
	index++;
	}	
}

void BinarySearch::display(){
	for(int i=0;i<MAX_SIZE;i++){
		std::cout<<element[i]<<std::endl;
	}
}

int main(){
	BinarySearch b;
	b.insert_data(3);
	b.insert_data(5);
	b.insert_data(2);
	b.display();

}
