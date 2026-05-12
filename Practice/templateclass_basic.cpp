#include<iostream>
#include<string>
using namespace std;

template<typename T , typename U>
class Box{
	private:
		T a;
		U b;
		
	public:
		Box(const T& a, const U& b){
			this->a = a;
			this->b = b;
		}
		
	    T geta() const{
			return a;
		}
		U getb() const{
			return b;
		}
		
		void display() const{
			cout<<a<<" "<<b<<endl;
		}
};
int main(){
	Box<int ,int> p1(2 , 3); 
	p1.display();
	
	Box<string, string> p2("Arbish" , "Aisha");
	p2.display();
	
	Box<int , float> p3(5, 9.8);
	p3.display();
	
	return 0;
}