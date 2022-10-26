#include <iostream>

using namespace std;

class Matrix {
	public:
		int r1, c1, r2, c2;
		int **m1, **m2;
		
		void getInput () {
			cout << "Enter number of rows in Matrix-1 :";
			cin >> r1;
			cout << "Enter number of columns in Matrix-1 :";
			cin >> c1;
			cout << "Enter number of rows in Matrix-2 :";
			cin >> r2;
			cout << "Enter number of columns in Matrix-2 :";
			cin >> c2;
			
			m1 = new int*[r1];
			for(int i = 0; i < r1; i++)
    			m1[i] = new int[c1];
    			
			m2 = new int*[r2];
			for(int i = 0; i < r2; i++)
    			m2[i] = new int[c2];

			cout << "Enter Matrix-1 elements:"<< endl;
			for (int i = 0; i < r1;  i++){
				for (int j = 0; j < c1; j++){
					cin >> m1[i][j];
				}
			}
			cout << "Enter Matrix-2 elements:"<< endl;
			for (int i = 0; i < r2;  i++){
				for (int j = 0; j < c2; j++){
					cin >> m2[i][j];
				}
			}
		}
};

class Add : public Matrix {
	public:
		int **sum;
		
		int** add () {
			if (r1 == r2 and c1 == c2){
				sum = new int*[r1];
				for(int i = 0; i < r1; i++)
    				sum[i] = new int[c1];
    			
    			for (int i = 0; i < r1;  i++){
					for (int j = 0; j < c1; j++){
						sum[i][j] = m1[i][j] + m2[i][j];
					}
				}
				return sum;
    		}
    		else {
    			return NULL;
    		}
		}
};

class Subtract : public Matrix {
	public:
		int **diff;
		
		int** sub () {
			if (r1 == r2 and c1 == c2){
				diff = new int*[r1];
				for(int i = 0; i < r1; i++)
    				diff[i] = new int[c1];
    			
    			for (int i = 0; i < r1;  i++){
					for (int j = 0; j < c1; j++){
						diff[i][j] = m1[i][j] - m2[i][j];
					}
				}
				return diff;
    		}
    		else {
    			return NULL;
    		}
		}
};

class Multiply : public Matrix {
	public:
		int **prod;
		
		int** multiply () {
			if (r2 == c1){
				prod = new int*[r1];
				for(int i = 0; i < r1; i++)
    				prod[i] = new int[c2];
    			
    			for (int i = 0; i < r1;  i++){
					for (int j = 0; j < c2; j++){
						//prod[i][j] = 0;
						for (int k = 0; k < c1; k++){
							prod[i][j] += m1[i][k] * m2[k][j];
						}
					}
				}
				return prod;
    		}
    		else {
    			return NULL;
    		}
		}
};

int main() {

	Add a;
	
	cout << "--------------------ADDITION--------------------" << endl;
	a.getInput();
	int ** sum = a.add();
	cout << "Sum of matrices:"<< endl;
	if (sum != NULL){
		for (int i = 0; i < a.r1;  i++){
			for (int j = 0; j < a.c1; j++){
				cout << sum[i][j] << " ";
			}
			cout << endl;
		}
	}
	else {
		cout << "Matrix must be of same size!" << endl;
	}
	
	Subtract s;
	cout << "--------------------SUBTRACTION--------------------" << endl;
	s.getInput();
	int ** diff = s.sub();
	cout << "Difference of matrices:"<< endl;
	if (diff != NULL){
		for (int i = 0; i < s.r1;  i++){
			for (int j = 0; j < s.c1; j++){
				cout << diff[i][j] << " ";
			}
			cout << endl;
		}
	}
	else {
		cout << "Matrix must be of same size!" << endl;
	}
	
	Multiply m;
	cout << "--------------------MULTIPLICATION--------------------" << endl;
	m.getInput();
	int ** prod = m.multiply();
	cout << "Product of matrices:"<< endl;
	if (prod != NULL){
		for (int i = 0; i < m.r1;  i++){
			for (int j = 0; j < m.c2; j++){
				cout << prod[i][j] << " ";
			}
			cout << endl;
		}
	}
	else {
		cout << "Matrix multiplication is not possible!" << endl;
	}
	
	
	return 0;
}
