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

bool BinarySearch::Binary_Search(int data){
	int min=0;
	int max=MAX_SIZE-1;
	while (max>min){
		int mid=(min+max)/2;
		if(element[mid]==data){
			return true;
		}
		else if(element[mid]<data){
			max=mid-1;
		}
		else if(element[mid]>data){
			min=mid+1;
		}
	}
	return false;
}

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
