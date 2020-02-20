#include <iostream>
#include "InsertionSort.h"

int main(){
	InsertionSort b;
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
	b.Insert_Sort();
	b.display();
}
