#include <iostream>

using namespace std;

class Stack {
	public:
		int* elements;
		int size;
		int top;
		Stack(int size1);
		~Stack();
		void push(int);
		int pop();
		void display();
		bool isFull();
		bool isEmpty();
};

Stack::Stack(int size1) {
	size = size1;
	top = -1;
	elements = new int[size];
}

Stack::~Stack(){
	delete elements;
}

void Stack::push(int c){
	top += 1;
	elements[top] = c;
}

int Stack::pop(){
	int c = elements[top];
	top -= 1;
	return c;
}

bool Stack::isEmpty() {
	if (top == -1)
		return true;
	return false;
}

bool Stack::isFull() {
	if (top == size - 1)
		return true;
	return false;
}

void Stack::display(){
	cout << "Stack elements:" << endl;
	for (int i = 0; i <= top; i++){
		cout << elements[i] << " ";
	}
	cout << endl;
}

int main(){
	int num;
	cout << "Enter size of stack: ";
	cin >> num;
	Stack s(num);
	while (true){
		cout << "-----------------------------\n1.Push\n2.Pop\n3.Display\n4.Is Empty?\n5.Is Full?\n6.Exit\nEnter choice: ";
		int choice;
		cin >> choice;
		if (choice == 1){
			if (!s.isFull()){
				int n;
				cout << "Enter element: ";
				cin >> n;
				s.push(n);
				cout << n << " is added." << endl;
			}
			else{
				cout << "Stack is full!" << endl;
			}
		}
		else if (choice == 2){
			if (!s.isEmpty()){
				cout << s.pop() << " is removed." << endl;
			}
			else{
				cout << "Stack is empty!" << endl;
			}
		}
		else if (choice == 3){
			if (!s.isEmpty()){
				s.display();
			}
			else{
				cout << "Stack is empty!" << endl;
			}
		}
		else if (choice == 4){
			s.isEmpty() ? cout << "Stack is empty!" << endl : cout << "Stack is not empty!" << endl;
		}
		else if (choice == 5){
			s.isFull() ? cout << "Stack is full!" << endl : cout << "Stack is not full!" << endl;
		}
		else if (choice == 6){
			break;
		}
		else {
			cout << "Invalid choice!" << endl;
		}
	}
	return 0;
}
