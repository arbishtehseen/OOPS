#include<iostream>
using namespace std;

template<typename T>
void swap(T* a , T* b){
	T temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int a = 2 , b = 3;
	cout<<"a : "<<a<<" b : "<<b<<endl;
	swap(&a , &b);
	cout<<"a : "<<a<<" b : "<<b<<endl;
	return 0;
}