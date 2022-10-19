#include <iostream>

using namespace std;

class A {
	public :
		int sum = 0;
		int add(int a, int b){
			sum = a + b;
			return sum;
		}
	
};

class B {
	public :
		int difference = 0;
		int subtract(int a, int b){
			difference = a - b;
			return difference;
		}
	
};

class C : public A, public B {
	public :
		int product;
		int multiply(){
			product = sum * difference;
			return product;
		}
};

class D : public C {
	public :
		int val;
		int square(){
			val = product * product;
			return val;
		}
};

class E : public C {
	public :
		int val;
		int cube(){
			val = product * product * product;
			return val;
		}
};


int main() {

	A a;
	B b;
	C c;
	D d;
	E e;
	
	cout << "Enter 2 numbers: ";
	int num1, num2;
	cin >> num1 >> num2;
	
	c.sum = a.add(num1, num2);
	
	cout << "Sum = " << c.sum << endl;
	
	cout << "Enter 2 numbers: ";
	cin >> num1 >> num2;
	
	c.difference = b.subtract(num1, num2);
	
	cout << "Difference = " << c.difference << endl;
	
	d.product = c.multiply();
	e.product = c.multiply();
	
	cout << "Product = " << c.product << endl;
	
	cout << "Square = " << d.square() << endl;
	
	cout << "Cube = " << e.cube() << endl;
	
	return 0;
}
