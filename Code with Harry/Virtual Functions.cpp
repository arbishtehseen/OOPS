#include<iostream>
using namespace std;
/*
- agr pointer baseclass ka bnayen and wo point kre towards derivedclass, toh usually kya hota h ke display baseclass
ka call hota h lekin we want ke derivedclass ka call hou yaani ke pointer jis ki bi trf point kre uska hi display call
hou thats why we use virtual functions.
- Virtual Functions banne se Run-Time Polymorphism achieve hotaa hae.
*/


/*
- Polymorphism is a property, in which objects which belong to different classes responds to same type of message.
- Binding of Function happens at Rum-Time.
*/

class Base{
	public:
		int var_base;
		
		virtual void display() {
			var_base= 90;
			cout<<"Displaying Base Class Variable : "<<var_base<<endl;
		}
};

class Derived : public Base{
	public:
		int var_derived;
		
		void display() {
			var_base = 1;
		    var_derived = 2;
			cout<<"Displaying Base Class Variable : "<<var_base<<endl;
			cout<<"Displaying Derived Class Variable : "<<var_derived<<endl;
		}
};


int main(){
	Base* bptr;
	Base obj_b;
	Derived obj_d;
	
	bptr = &obj_d;
	bptr->display();
	
	bptr = &obj_b;
	bptr->display();

	
	return 0;
}