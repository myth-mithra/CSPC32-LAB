#include <stdio.h>

int factorial (int n) {
	if (n == 1){
		return 1;
	}
	if (n == 0){
		return 1;
	}
	else {
		return n * factorial (n-1);
	}
}

void main() {

	int n;
	printf("Enter a positive integer: ");
	scanf("%d",&n);
	
	int fac = 1;
	
	for (int i = 1; i <= n; i++)
		fac *= i;
	
	printf("Factorial of %d = %d (Using recursion)\n",n,factorial(n));
	printf("Factorial of %d = %d (Without recursion)\n",n,fac);
	
}
