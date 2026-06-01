#include<iostream>
#include<string>
using namespace std;

// class CWH is an abstract base class, and ye class bnti hi eslye hae ke isse derive hoke aur derived classes bne
// and pure virtual function override hou
// Abstract base class hi wo class hoti h, jis m km se km ek pure virtual function hou
// abstract base class ka object cannot be created, pointer can be made but not object.
// because pointer stores address and no real memory is allocated, while object takes up space in memory




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
		
		virtual void display() = 0; // pure virtual function
		// if a pure virtual function is made, then it is necessary to redefine it in each and every derived class.
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
}