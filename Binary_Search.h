#include "sorting/InsertionSort.h"
#define MAX_SIZE 10

class BinarySearch{
	private:
		InsertionSort i;
		
	public:
		void insert_data(int data);
		bool Binary_Search(int data);
		void display();
};


void BinarySearch::insert_data(int data){
	i.insert_data(data);	
}

void BinarySearch::display(){
	i.display();
}

bool BinarySearch::Binary_Search(int data){
	i.Insert_Sort();
	int min=0;
	int max=MAX_SIZE-1;
	while (max>min){
		int mid=(min+max)/2;
		if(i.get_element(mid)==data){
			return true;
		}
		else if(i.get_element(mid)<data){
			max=mid-1;
		}
		else if(i.get_element(mid)>data){
			min=mid+1;
		}
	}
	return false;
}
