#include<iostream>
using namespace std;

template<typename T, typename V>
auto multiply(T a , V b){
	return a*b;
}
int main(){
	auto result1 = multiply(3,3);
	auto result2 = multiply(4.5 , 6.7);
	auto result3 = multiply(4 , 4.9);
	auto result4 = multiply<int>(9 , 9);
	
	cout<<result1<<endl;
	cout<<result2<<endl;
	cout<<result3<<endl;
	cout<<result4<<endl;
	
	
	return 0;
}