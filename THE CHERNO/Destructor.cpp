#include<iostream>
using namespace std;

class Entity{
	
	public:
	float X , Y;
	
	Entity()
	{
	   X = 0;
	   Y = 0;
	   cout<<"Entity Created!"<<endl;
	}
	Entity(float x, float y)
	{
		X = x;
		Y = y;
		cout<<"Entity Created!"<<endl;
	}
	
			
	void display()
	{
		cout<<X<<" , "<<Y<<endl;
	}
	
	~Entity()
	{
		cout<<"Destroyed Entity."<<endl;
	}
};

void Function(){
	Entity e(5.0f, 10.0f);
	e.display();
	
}

int main(){
	Function();
	
	return 0;
}