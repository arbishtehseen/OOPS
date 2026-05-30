#include<iostream>
using namespace std;

class BaseClass{
	public:
	int var_base;
	
	void display()	{
		cout<<"Displaying Base Class Variable : "<<var_base<<endl;
	}
	
};

class DerivedClass : public BaseClass{
	public:
		int var_derived;
		
		void display()  {
			cout<<"Displaying Base Class Variable : "<<var_base<<endl;
			cout<<"Displaying Derived Class variable : "<<var_derived<<endl;
		}
	
};

int main(){
	BaseClass* baseclass_ptr; // it'll point towards object of base class
	BaseClass obj_base;
	DerivedClass obj_derived;
	
	baseclass_ptr = &obj_derived; // baseclass ka pointer is pointing towards object of derived class
	// no error will be thrown
    baseclass_ptr->display();
	return 0;
}