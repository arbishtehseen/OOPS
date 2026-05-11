#include<iostream>
using namespace std;

template<typename T, size_t N>
class ArrayReverse{
	private:
		T arr[N];
	public:
		ArrayReverse(){
			for(int i = 0 ; i < N ; i++){
				arr[i] = 0;
			}
		}
		
		void addnewelement(int index, T element){
			if(index < N){
				arr[index] = element;
			}
		}
		
		void reverseArray(){
			T start = 0;
			T end = N-1 ; 
			
			while(end > start){
				T temp;
				temp = arr[start];
				arr[start] = arr[end];
				arr[end] = temp;
				end--;
				start++;
			}	
		}
		
		void display(){
			for(int i = 0 ; i < N ; i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
};

int main(){
	ArrayReverse<int , 5> obj;
	
	for(int i = 0 ; i < 10 ; i++){
		obj.addnewelement(i , i+1);
	}
	obj.display();
	obj.reverseArray();
	obj.display();
	
	
	return 0;
}