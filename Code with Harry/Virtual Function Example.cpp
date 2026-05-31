#include<iostream>
#include<string>
using namespace std;

class CWH{
	protected:
		char* title;
		float rating;
	
	public:
		CWH(const char* s, float r)
		{
			int size = strlen(s);
			 title = new char[size +1];
			memcpy(title, s , size+1);
			
		    if(r >= 1 && r <= 5)
		    {
		    	rating = r; 
			}
		}
		
		virtual void display()  {}
};

class CWHvideo : public CWH{
	private :
		int videolength;
		
	public:
		CWHvideo(const char* s, float r, int len) : CWH(s , r){
			videolength = len;
		}
		
		void display() override {
			cout<<"This was an amazing video with Title : "<<title<<endl;
			cout<<"Rating : "<<rating<<endl;
			cout<<"This video is "<<videolength<<" minutes long"<<endl;
		}
};

class CWHtext : public CWH{
	private:
		int wordcount;
		
	public:
		CWHtext(const char* s, float r, int wc) : CWH(s , r) {
			wordcount = wc;
		}
		
		void display() override {
			cout<<"This was an amazing Text tutorial  with Title : "<<title<<endl;
			cout<<"Ratings od this text tutorial is  : "<<rating<<endl;
			cout<<"Word Count :  "<<wordcount<<endl;
		}
};
		
int main(){
	CWH* bptr;
	CWHvideo obj_video("arbish" , 4.9 , 98);
	CWHtext obj_text("Arbish" , 3.3 , 1900);
	
	bptr = &obj_video;
	bptr->display();
	
	bptr = &obj_text;
	bptr->display();
	
	
	
	return 0;
	/*
	Rules for virtual functions:
	- They cannot be static.
	- They are accessed by object pointer.
	- Virtual Functions can be a friend of another class.
	- A virtual function in base class might not be used.
	- agr virtual function defined hae base class m ,lekin usko derived class mae redefine nhi kiya gya toh bi koi
	issue nhi h ,
	aese mae hoga kya ke baseclass ka hi display run hojaaye ga.
	*/
}