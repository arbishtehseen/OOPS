#include<iostream>
using namespace std;

template<typename T>
class Printer{
	
	private:
	T val;
	
	public:
		Printer(T val) : val(val){}
		void display() const{
			cout<<val<<endl;
		}
};

template<typename T>
class Printer <T*>{
	private:
	T* val;
	
	public:
		Printer(T* val) : val(val){}
		void display() const{
			cout<<val<<endl;
		}
};

template<>
class Printer<bool>{
	private:
		bool val;
	public:
	    Printer() : val(0){}
	    Printer(bool v1) : val(v1){}
	    void display() const{
	    	if(val == 0) cout<<"false"<<endl;
	    	else if(val == 1) cout<<"true"<<endl;
	    	else cout<<"invalid input"<<endl;
		}
};

int main(){
	Printer<int> o1(8);
	Printer<float> o2(9.3);
	Printer<double> o3(8.990); 
	Printer<bool> o4(0);
	Printer<bool> o5(1);
	int a = 9;
	Printer<int*> ob6(&a);

    o1.display();
    o2.display();
    o3.display();
    o4.display();
    o5.display();
    ob6.display();
    return 0;
}