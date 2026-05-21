#include<iostream>
using namespace std;

class B;

class A{
	private: 
	int a;
	
	public:
		A() : a(0){
		}
		
		A(int a){
			this->a = a;
		}
		
	friend int findmax(A a , B b);
};

class B{
	private:
		int b;
		
	public:
		B() : b(0){
		}
		B(int b){
			this->b= b;  
		}
	
	friend int  findmax(A a , B b);
};


int findmax(A a , B b){
	
	if( a.a > b.b  ){
		return 1;
	}
	else if( a.a < b.b ){
		return -1;
	}
	else{
		return 0;
	}
}

int main(){
	A a(9);
	B b(8);
	int result = findmax(a , b);
	
	if( result == 1){
		cout<<"Class A object is greater than Class B object"<<endl;
	}
	else if( result == -1 ){
			cout<<"Class B object is greater than Class A object"<<endl;
	}
	else{
		cout<<"Objects of both classes are equal."<<endl;
	}
	
	
}
