#include<iostream>
using namespace std;


class Log
{
	public:
	    const int LogLevelError = 0;
		const int LogLevelWarning = 1;
		const int LogLevelinfo = 2;	
		
	private:
		int m_LogLevel = LogLevelinfo ;
		
		
	public:
		void SetLevel(int level)
		{
			m_LogLevel = level;
			
		}
		
		void Warn(const char* message)
		{
			if(m_LogLevel == LogLevelWarning) 
		    {
			cout<<"[Warning] : "<<message<<endl;
		    }
		}
	
	    void Error(const char* message)
		{
			if(m_LogLevel == LogLevelError)
			{
			cout<<"[Error] : "<<message<<endl;
		    }
		}
		
		void Info(const char* message)
		{
			if(m_LogLevel >= LogLevelinfo)
			{
			cout<<"[Info] : "<<message<<endl;
		    }
		}
};

int main()
{
	Log log; 
	log.SetLevel(log.LogLevelinfo);
	
	log.Warn("Hello");
	log.Error("Hello");
	log.Info("Hello");
	
	log.SetLevel(log.LogLevelError);
	
	log.Warn("Hello");
	log.Error("Hello");
	log.Info("Hello");
	
	log.SetLevel(log.LogLevelWarning);
	
	log.Warn("Hello");
	log.Error("Hello");
	log.Info("Hello");
	
	
	
	return 0;
}