#include<iostream>
using namespace std;

class Vector3{
	public :
		float x , y , z;
	
};
int main(){
	
	// memory on stack.
	int value = 5; 
	
	
	// stack array.
	int arr[5];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	
	
	// class object on stack
	Vector3 vector;
	vector.x = 4.0;
	vector.y = 5.0;
	vector.z = 6.0;
	
	// memory on heap.
	// "new" is the 'keyword' to allocate memory on heap.
	int *hvalue = new int;
	*hvalue = 5; 
	
	
	// heap array.
	int* harr = new int[5];
	harr[0] = 1;
	harr[1] = 2;
	harr[2] = 3;
	harr[3] = 4;
	harr[4] = 5;
					
	// class object on heap
	Vector3* hvector = new Vector3;
	hvector -> x = 1.0;
	hvector -> y = 2.0;
	hvector -> z = 3.0;
	
	delete hvalue;
	delete[] harr;
	delete hvector;

	
	return 0;
}