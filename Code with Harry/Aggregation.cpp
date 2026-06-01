#include<iostream>
#include<string>
#include<vector>
using namespace std;

// Aggregation mein tumhe pointers store karne hain — actual objects nahi — kyunke objects bahar bane hain.

class Professor{
	private:
		char* pname;
		char* subject;
	
	public:
		Professor(const char* n, const char* s){
			int size = strlen(n);
			pname = new char[size+1];
			memcpy(pname, n , size+1);
			
			int size2 = strlen(s);
			subject = new char[size2+1]	;
			memcpy(subject, s , size2+1);
			}
			
			const char* getprofname() const{  return pname;	}
			const char* getsubject()  const{  return subject; }
			
			~Professor(){
				delete[] pname;
				delete[] subject;
			}	
};

class Department{
	private:
		char* deptname;
	    vector<Professor*> professor; //  aggrregation
	    // vector<Professor> professor; // composition
	    int count;
	    
	public:
		Department(const char* n){
			int size  = strlen(n);
			deptname = new char[size+1];
			memcpy(deptname, n, size+1);
			cout<<"Department of "<<deptname<<" is created!"<<endl;
		}
		
		void addprofessor(Professor* p){
			professor.push_back(p);
		}
		
		void display() const{
			cout<<"Department : "<<deptname<< endl;
			cout<<"Professors : "<<endl;
			for(int i = 0; i < professor.size() ; i++){
				cout<<" [ "<<i+1<<professor[i]->getprofname() << " | Subject "<<
				professor[i]->getsubject();
			}
		}
		
		~Department(){
			cout<<"Department of "<<deptname<<"  Destroyed!"<<endl;
			delete[] deptname;
			//  professor vector will get cleaned automatically.
			// professor objects wesr bi outside create huve hein.
		}
};

int main(){
	Professor p1("Arbish" , "Programming Fundamnetals");
	Professor p2("Aisha Tarique" , "Physics");
	
	Department d1("CSIT");
	Department d2("BS Physics");
	
	d1.addprofessor(&p1);
	d2.addprofessor(&p2);
	
	d1.display();
	d2.display();
	
	
	return 0;
}


