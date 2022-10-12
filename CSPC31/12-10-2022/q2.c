#include <stdio.h>
/*
int fibonacci (int n) {
	if (n == 1){
		return 1;
	}
	if (n == 0){
		return 0;
	}
	else {
		return fibonacci(n-1) + fibonacci (n-2);
	}
}
*/

int fibonacci (int a, int b, int n) {
	if (n == 0){
		return 0;
	}
	else {
		printf("%d ",a+b);
		fibonacci(b,a+b,n-1);
	}
}

void main() {

	int n;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	
	/*
	printf("Fibonacci series (Using recursion):\n");
	for (int i = 1; i <= n; i++){
		printf("%d ",fibonacci(i));
	}
	printf("\n");
	*/
	
	printf("Fibonacci series (Using recursion):\n");
	fibonacci(-1,1,n);
	printf("\n");
	
	printf("Fibonacci series (Without recursion):\n");
	int a = 1, b = 0, c = 0;
	for (int i = 0; i < n; i ++){
		printf("%d ",c);
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");
	
}
