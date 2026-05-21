#include<iostream>
using namespace std;

class Vector_2D{
	private:
		float x;
		float y;
	
	public:
		Vector_2D(float x = 0 , float y = 0) : x(x) , y(y){}
		Vector_2D(float x, float y) : x(x) , y(y){}
		
		friend Vector_2D operator + (const Vector_2D& v1, 
		const Vector_2D& v2);
		
		friend ostream& operator <<(ostream& out ,const Vector_2D& v1);
		
		friend istream& input(istream& in, Vector_2D& v);
		
		friend Vector_2D operator * (Vector_2D& v , int value); 
		
		
		friend bool operator == (const Vector_2D& v1, const Vector_2D& v2);

};

Vector_2D operator + (const Vector_2D& v1, const Vector_2D& v2){
	return Vector_2D(v1.x + v2.x , v1.y + v2.y);
}

Vector_2D operator * (Vector_2D& v , int value){
	return Vector_2D((v.x)*value , (v.y)*value);
}

bool operator == (const Vector_2D& v1, const Vector_2D& v2){
	if( (v1.x == v2.x) && (v1.y == v2.y) ){
		return true;
	}
	else{
		return false;
	}
}

 ostream& operator <<(ostream& out ,const Vector_2D& v1){
		out << "("<< v.x<<" , "<<v.y<<" )";
		return out;	
}

istream& input(istream& in, Vector_2D& v){
	in >> v.x >>v.y;
	return in;
}


int main(){
	int main() {
    // 1. Objects Creation (Parameterized Constructor)
    Vector_2D v1(3.5, 2.0);
    Vector_2D v2; // Default (0, 0)

    // 2. Testing Input (Operator >>)
    cout << "--- Testing Input Operator >> ---" << endl;
    cout << "Enter values for v2 (e.g., 1.5 4.0): " << endl;
    cin >> v2; 

    // 3. Testing Output (Operator <<)
    cout << "\n--- Current Vectors ---" << endl;
    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;

    // 4. Testing Addition (Operator +)
    Vector_2D v3 = v1 + v2;
    cout << "\n--- Result of Addition (v1 + v2) ---" << endl;
    cout << "v3: " << v3 << endl;

    // 5. Testing Scalar Multiplication (Operator *)
    // Yaad rahe humne 2 arguments wala banaya tha: (Vector, int)
    Vector_2D v4 = v1 * 3; 
    cout << "\n--- Result of Scalar Multiplication (v1 * 3) ---" << endl;
    cout << "v4: " << v4 << endl;

    // 6. Testing Equality (Operator ==)
    cout << "\n--- Testing Equality Check ---" << endl;
    if (v1 == v2) {
        cout << "v1 and v2 are EQUAL." << endl;
    } else {
        cout << "v1 and v2 are NOT EQUAL." << endl;
    }

    // Pro-Tip: Testing Chaining
    cout << "\n--- Final Chaining Check ---" << endl;
    cout << "The three vectors are: " << v1 << ", " << v2 << ", and " << v3 << endl;

    return 0;
}
	
	
	return 0; 
}