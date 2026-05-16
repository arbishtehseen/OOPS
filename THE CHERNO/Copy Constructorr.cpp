#include<iostream>
#include<string>
using namespace std;

class String{
	
	private:
		// string is made up of array of characters.
		char* m_buffer;
		unsigned int m_size;
	
	public:
		
		String() {
			m_size = 3; 
			m_buffer = new char[m_size +1];
			memcpy(m_buffer , "N/A" , m_size+1);
			cout<<"Default constructor invoked"<<endl;
		}
		
		String(const char* buffer) 
		{
			
	      m_size = strlen(buffer); 
	      m_buffer = new char[m_size+1]; 
	      memcpy(m_buffer , buffer , m_size+1);
	      cout<<"Parameterised constructor invoked."<<endl;
	      
	   }
	   
	   /* what C++ provides us with.
	   String(const String& other) : m_buffer(other.m_buffer) , m_size(other.m_size)
	   {} 
	   - but this means --> shallow copy.
	   - address is being copied. (and we dont want that)
	   
	   if you just want to delete this default copy constructor, just do:
	   
	   String(const String& other) = delete;
	   */
	   
	   String(const String& other)
	   {
	   	
	   	// we could've initialised m_size in initialisation list.
	   	
	   	m_size = other.m_size;
	   	m_buffer = new char[m_size +1]; 
	   	memcpy(m_buffer , other.m_buffer , m_size+1);
	   	cout<<"Copied object"<<endl;
	   }
	   
	   // if dont delete it, then memory leaks.
    	~String()
		{ 
		delete[] m_buffer;
		cout<<"Destructor invoked."<<endl; 
		}
	    
	    friend std::ostream& operator<<(std::ostream& stream, const String& buffer);
	    
	    const char* getbuffer() const{ return m_buffer;}
	    
};


std::ostream& operator<<(std::ostream& stream , const String& buffer)
{
	stream << buffer.m_buffer <<endl;
	stream << buffer.m_size <<endl;
	return stream;
}


int main(){
	String s1 = "Arbish"; 
	// here when you wrote s2 = s1, it automatically called copy constructor.
	String s2 = s1;
	cout<<s1<<endl;
	cout<<s2<<endl;
	
	

	return 0;
}


/* for copy in such case, we'll make another obj and allocate it diff memory
*/