#include <iostream>

using namespace std;

template <class T>

T largest (T a, T b){
	if (a>b)
		return a;
	else
		return b;
}

int main(){
	int a, b;
	cout << "Enter 1st integer: ";
	cin >> a;
	cout << "Enter 2nd integer: ";
	cin >> b;
	cout << "The largest is " << largest(a,b) << endl;
	
	char a1, b1; 
	cout << "Enter 1st character: ";
	cin >> a1;
	cout << "Enter 2nd character: ";
	cin >> b1;
	cout << "The largest is " << largest(a1,b1) << endl;
	
	float a2, b2; 
	cout << "Enter 1st decimal number: ";
	cin >> a2;
	cout << "Enter 2nd decimal number: ";
	cin >> b2;
	cout << "The largest is " << largest(a2,b2) << endl;
	
	return 0;
}
