#include<iostream>
#include<vector>
#include<string>
using namespace std;

template<typename T, size_t N> 
class Stack{
	private:
		T arr [N]; 
		int i = 0;
	
	public: 
	
	void addelements(T temp){
		arr[i] = temp;
		i++;
		cout<<"element added"<<endl;
	}
	
	void deleteelement(T temp){
		for(int j = 0 ; j < N ; j++){
			if(arr[j] == temp){
				for(int k = j ; k < N-1 ; k++){
					arr[k] = arr[k+1];
				}
			}
		}
		i--;
		cout<<"Element deleted!"<<endl;
	}
	
	T getarraysize() const{
		cout<<"Returned size of array!"<<endl;
		return N;
	}
	
	void display(){
		for(int j = 0 ; j < N ; j++){
			cout<<arr[j]<<endl;
		}
	}
};

int main(){
	Stack<int, 5> s1;
	Stack<string , 3> s2;
	
	s1.addelements(8);
	s1.addelements(9);
	s1.addelements(10);
	s1.deleteelement(9);
	s1.display();
	return 0;
}