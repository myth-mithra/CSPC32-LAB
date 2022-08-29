#include <stdio.h>

void main() {
    int n;
    int f = 1;
    printf("Enter an integer: ");
    scanf("%d",&n);
    for (int i = 1; i < n+1; i++){
        f *= i;
    }
    printf("Factorial of %d is %d.\n",n,f);
}
