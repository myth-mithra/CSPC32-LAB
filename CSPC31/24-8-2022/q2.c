#include <stdio.h>

void main(){
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    int a = -1, b = 1, c ;
    printf("Fibonacci series:\n");
    for (int i = 0; i < n; i++){
        c = a + b;
        printf("%d ",c);
        a = b;
        b = c;
    }
}