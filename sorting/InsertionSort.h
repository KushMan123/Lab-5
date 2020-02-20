#define MAX_SIZE 10

class InsertionSort{
	private:
		int element[MAX_SIZE];
	public:
		InsertionSort();\
		~InsertionSort();
		void insert_data(int data);
		void Insert_Sort();	
		void display();	
		int get_element(int index);
};

InsertionSort::InsertionSort(){
		for(int i=0;i<MAX_SIZE;i++){
		element[i]=0;
	}
}

InsertionSort::~InsertionSort(){
	
}

void InsertionSort::insert_data(int data){
	int index=0;
	while(index<MAX_SIZE){
		if (element[index]==0){
			element[index]=data;
			break;
		}
	index++;
	}
}

void InsertionSort::Insert_Sort(){
	int key;
	int i;
	for(int j=1;j<MAX_SIZE;j++){
		key=element[j];
		i=j-1;
		while(i>=0 && element[i]>key){
			element[i+1]=element[i];
			i=i-1;	
		}
		element[i+1]=key;
	}	
}

void InsertionSort::display(){
	for(int i=0;i<MAX_SIZE;i++){
		std::cout<<element[i]<<std::endl;
	}
}

int InsertionSort::get_element(int index){
	return element[index];
}
