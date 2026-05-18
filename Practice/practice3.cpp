#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Student{
	private:
		char* student_name;
		int student_id;
		double gpa;
		vector<string> coursename;
		int num_of_courses;
		
	public:
		Student():  student_id(0) , gpa(0) , num_of_courses(0)
		    {
			int size = 1;
			student_name = new char[size];
			student_name[0] = '\0';
			coursename.push_back("N/A");
	        }
	
	    Student(const char* name , int id , double gpa, string course_name, int n):
	    	student_id(id)  , num_of_courses(n) 
			{
				int size = strlen(name);
				student_name = new char[size+1];
				memcpy(student_name, name , size+1);
				if(gpa >= 0.0 && gpa <= 4.0){
					this->gpa = gpa;
				}
				else{
					this->gpa = 0.0;
				}
				coursename.push_back(course_name);
			}
			
			Student(const Student& other)
			{
				int size = strlen(other.student_name);
				student_name = new char[size+1];
				memcpy(student_name, other.student_name , size+1);
				student_id = other.student_id;
				gpa = other.gpa;
				for(int i = 0 ; i < other.coursename.size() ; i++)
				{
				coursename.push_back(other.coursename[i]);
			    }
				num_of_courses = other.num_of_courses;
			}
			
			~Student()
			{
				delete[] student_name;
				coursename.clear();
			}
			
			const char* getstudentname() const { return student_name; }
			int getstudentid() const{ return student_id; }
			double getgpa() const{ return gpa;}
			vector<string> getcoursename()const
			{ 
				return coursename;
			}
			int gettotalcoursecount() const{ return num_of_courses;}
	        void setgpa(double gpa)
	        {
	        	if(gpa >= 0.0 && gpa <= 4.0){
					this->gpa = gpa;
				}
				else{
					this->gpa = 0.0;
				}
			}
			
			friend ostream& operator<<(ostream& stream, const Student& temp);
};

ostream& operator<<(ostream& stream, const Student& temp)
{
	stream<<"[Student Name] : "<<temp.student_name<<endl;
	stream<<"[Student ID] : "<<temp.student_id<<endl;
	stream<<"[GPA] : "<<temp.gpa<<endl;
	for(int i = 0 ; i < temp.coursename.size() ; i++)
	{
	stream<<"[Course Name] : " <<temp.coursename[i]<<endl;
    }
	stream<<"[Total Courses] : "<<temp.num_of_courses<<endl;
	
	return stream;
}

int main(){
	Student obj("Arbish" , 53, 3.89, "OOP", 2);
	Student obj2("Aisha" , 6 , 4.0 , "QR", 1);
	
	cout<<obj;
	cout<<obj2;
	
	
	return 0;
}