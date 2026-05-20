#include<iostream>
using namespace std;

template<typename T>
class result{
	private:
		T val;
	public:
		result() : val(0){}
		result(T val) : val(val){}
		void display() const{
			cout<<"Value : "<<val<<endl;
		}
};

template<>
class result<bool>{
	private:
		bool val;
		
	public:
		result() : val(0){}
		result(bool val) : val(val){}
		void display() const{
			if(val == 0) cout<<"false"<<endl;
			else if(val == 1) cout<<"true"<<endl;
			else cout<<"Invalid input"<<endl;	
		}	
};

int main(){
	result<int> o1(9);
	result<float> o2(8.9);
	result<char> o3('*'); 
	result<bool> o4(0);
	result<bool> o5(1);
	
	o1.display();
	o2.display();
	o3.display();
	o4.display();
	o5.display();

	return 0;
}
