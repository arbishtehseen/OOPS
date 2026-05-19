#include<iostream>
#include<string>
using namespace std;

class Patient{
	
	private:
	char* patientname;
	int patientid;
	double temperature;
	bool isadmitted;
	int size;
	
	public:
		Patient() : patientid(0) , temperature(0) , isadmitted(false)
		{
			size = 0; 
			patientname = new char[size+1];
			patientname[0] = '\0';
		}

        Patient(const char* name, int id, double temp)
        {
        	size = strlen(name);
        	
        	patientname = new char[size+1];
        	memcpy(patientname, name, size+1);
            
            patientid = id;
            
            if(temp >= 9.50 && temp <= 110.0)
            {
            	temperature = temp;
			}
			else{
				cout<<"ERROR"<<endl;
			}
			isadmitted = true;
		}
		
		Patient(const Patient& other)
		{
		 size = other.size;
		 
		 patientname = new char[size+1];
		 memcpy(patientname , other.patientname, size+1);
	    
	    patientid = other.patientid;
	    temperature = other.temperature;
	    isadmitted = other.isadmitted;	
		}
	
	    ~Patient()
		{
	    	delete[] patientname;
	    	isadmitted = false;
		}
		
		const char* getpatientname() const{ return patientname;}
		int getpatientid() const { return patientid;}
		double gettemperature() const { return temperature;}
		bool getisadmitted() const{ return isadmitted; }
	
	    void settemperature(double temp)
	    {
	    	if(temp >= 95.0 && temp <= 110.0)
	    	{
	    		temperature = temp;
			}
			else{
				cout<<"ERROR"<<endl;
			}
		}
		
		friend ostream& operator<<(ostream& stream, const Patient& patient);
};

ostream& operator<<(ostream& stream, const Patient& patient)
{
	stream <<"[Patient Name] : "<<patient.patientname<<endl;
	stream <<"[Pateint ID] : "<<patient.patientid<<endl;
	stream <<"[Temperature] : "<<patient.temperature<<endl;
	if(patient.getisadmitted())
	{
		stream <<"[Current Status] : admitted"<<endl;
	}
	else{
		stream <<"[Current Status] : not admitted"<<endl;
	}
	
	
	return stream;
}

int main()
{
	Patient obj1("Arbish" , 77 , 110);
	Patient obj2 = obj1;
	
	cout<<obj1 << obj2;
	obj2.settemperature(120);
	
	
	return 0;
}