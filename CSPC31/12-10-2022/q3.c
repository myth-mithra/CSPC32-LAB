#include <stdio.h>

int gcd (int a, int b) {
	if (a % b == 0){
		return b;
	}
	else {
		return gcd(b, a % b);
	}
}

void main() {

	int a, b;
	
	printf("Enter 1st integer: ");
	scanf("%d",&a);
	printf("Enter 2nd integer: ");
	scanf("%d",&b);
	
	int mul = a * b;
	
	int gcd_value = a > b ? gcd(a, b) : gcd (b, a);

	printf("GCD of %d and %d = %d (Using recursion)\n", a, b, gcd_value);
	printf("LCM of %d and %d = %d (Using recursion)\n", a, b, mul / gcd_value);
	
	int gcd_val;
	
	while (a % b != 0){
		int temp;
		temp = b;
		b = a % b;
		a = temp;
	}
	gcd_val = b;
	
	printf("GCD of %d and %d = %d (Without recursion)\n", a, b, gcd_val);
	printf("LCM of %d and %d = %d (Without recursion)\n", a, b, mul / gcd_val);
	
}
