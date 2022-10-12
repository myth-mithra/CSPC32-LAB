#include <iostream>

using namespace std;

template <class T>

void sort (T arr[], int n){
	for (int i = 0; i < n; i ++){
		for (int j = 0; j < n-i-1; j++){
			if (arr[j] > arr[j+1]){
				T temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "Sorted array :" << endl;
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}

int main(){

	int n1;
	cout << "Enter number of elements: ";
	cin >> n1;
	int a1[n1];
	cout <<"Enter integer elements: " << endl;
	for (int i = 0; i < n1; i++){
		cin >> a1[i];
	}

	cout << "Given array :" << endl;
	for (int i = 0; i < n1; i++){
		cout << a1[i] << " ";
	}
	
	cout << endl;
	sort (a1,n1);
	
	cout << endl;
	int n2;
	cout << "Enter number of elements: ";
	cin >> n2;
	float a2[n2];
	cout <<"Enter float elements: " << endl;
	for (int i = 0; i < n2; i++){
		cin >> a2[i];
	}

	cout << "Given array :" << endl;
	for (int i = 0; i < n2; i++){
		cout << a2[i] << " ";
	}
	
	cout << endl;
	sort (a2,n2);
	
	cout << endl;
	int n3;
	cout << "Enter number of elements: ";
	cin >> n3;
	char a3[n3];
	cout <<"Enter character elements: " << endl;
	for (int i = 0; i < n3; i++){
		cin >> a3[i];
	}

	cout << "Given array :" << endl;
	for (int i = 0; i < n3; i++){
		cout << a3[i] << " ";
	}
	
	cout << endl;
	sort (a3,n3);
	
	
	return 0;
}
