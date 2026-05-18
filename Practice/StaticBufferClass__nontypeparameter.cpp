#include<iostream>
using namespace std;

template<typename T, size_t N>
class StaticBuffer{
	private:
		T arr[N];
	
	public:
		StaticBuffer(){
			for(int i = 0 ; i < N ; i++){
				arr[i] = 0;
			}
		}
		
		void addnewelement(int index, T element){
			if(index < N){
			arr[index] = element;
		}
		}
		
		void display() const{
			
			for(int i = 0 ; i < N ; i++){
				cout<<arr[i]<<" ";
			}
		}
};

int main(){
	StaticBuffer<int , 10> obj;
	
	for(int i = 0 ; i < 10 ; i++){
		obj.addnewelement(i, i+1);
	}
	obj.display();
	
	
	return 0;
}