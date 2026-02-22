#include<iostream>
using namespace std;

class Employee{
	
	/* since a , b , c  are private here so we cannot directly access them , 
	in order to access these variables setter function is made.
	*/ 
	private :
	int a , b , c;
	
	public : 
	int d , e ; 

        // Declaration.
        
	void setData(int a1 ,int b1 ,int c1);
	
		//Function can be implemented in the class.
		
	void getData(){
		cout<<"The value of a is : "<<a<<endl;
		cout<<"The value of b is : "<<b<<endl;
		cout<<"The value of c is : "<<c<<endl;
		cout<<"The value of d is : "<<d<<endl;
		cout<<"The value of e is : "<<e<<endl;
	}
	
};

   // Function can be implemented outta class.
   // Function Implementation.
   
void Employee :: setData(int a1 , int b1 , int c1){
	a = a1 ; 
	b = b1 ; 
	c = c1 ; 
}

int main(){
	 Employee harry;
	 harry.setData(1 , 2 , 4);
	 // harry.a = 134 ; (This won't work it'll throw error)
	 harry.d = 124;
	 harry.e = 90 ;
	harry.getData(); 
	 
	 return 0; 
}
