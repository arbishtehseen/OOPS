#include<iostream>
#include<vector>
using namespace std;
/* 
- array cannot be resized.
- vector can be resized, it manages size automatically.
- if you've made a vector, you can keep on adding elements as much as you want,
it'll manage its size itself.
*/

// popback delete element last one.
template <class T>
void display(vector<T>& v){
	cout<<"Displayed"<<endl;
   for(int i = 0 ; i < v.size() ; i++){
   	cout<<v[i]<<" ";
   }
   cout<<endl;
}

int main(){
	//syntax of declaration of vector.
	// vector(keyword) <datatype> name;
	
	
    // Ways to create vector.
	vector<int> vec1;  // zero length integer vector
	vector<char> vec2(4); // 4-element length character vector.
	vector<char> vec3(vec2); // 4-element character vector from vec2.
	vector<double> vec4(6 , 17);
	display(vec1);
	display(vec2);
	display(vec3);
	display(vec4);
	
	/* int element;

	for(int i = 0 ; i < 5 ; i++){
		cout<<"Enter Element : "<<endl;
		cin>>element;
		vec1.push_back(element);
	}
	
	display(vec1);
	vector<int> :: iterator iter = vec1.begin();
	vec1.insert(iter, 566);
	// iter+1 , krte toh 1st element ke bd insert krta.
	// ier+1,5 , likhou toh 5 copies insert hojayen gi.
	display(vec1);
	*/
	return 0;
}

