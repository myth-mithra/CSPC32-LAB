#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class A {
	public :
		string s1;
		string str1 (string a) {
			s1 = a;
			return s1;
		}
	
};

class B {
	public :
		string s2;
		string str2 (string a) {
			s2 = a;
			return s2;
		}
};

class C : public A, public B {
	public :
		string s3;
		string concatenate(){
			s3 = s1 + s2;
			return s3;
		}
};

class D : public C {
	public :
		bool palindrome(){
			string s4 = s3;
			reverse(s3.begin(), s3.end());
			if (s4 == s3){
				return true;
			}
			else {
				return false;
			}
		}
};

int main() {

	A a;
	B b;
	C c;
	D d;
	
	cout << "Enter a string: ";
	string s1;
	cin >> s1;

	cout << "Enter another string: ";
	string s2;
	cin >> s2;
	
	c.s1 = a.str1(s1);
	c.s2 = b.str2(s2);
	
	cout << "Concatenated string: " << c.concatenate() << endl;
	
	d.s3 = c.concatenate();
	
	d.palindrome() ? cout << "Concatenated string is a palindrome." << endl : cout << "Concatenated string is not a palindrome." << endl;
	
	return 0;
}
