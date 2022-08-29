#include <stdio.h>

void main() {
    int a,b;
    printf("Enter lower limit: ");
    scanf("%d",&a);
    printf("Enter upper limit: ");
    scanf("%d",&b);
    printf("The armstrong numbers from %d to %d are:\n",a,b);
    for (int i = a; i <= b; i++){
        int c = 0;
        int n = i;
        int rem = 0;
        while (n > 0){
            rem = n%10;
            n = n/10;
            c ++;
        }
        n = i;
        int sum = 0;
        while (n > 0){
            rem = n%10;
            n = n/10;
            int mul = 1;
            for (int j = 0; j<c; j++)
                mul *= rem;
            sum += mul;
        }
        if (sum == i){
            printf("%d ",i);
        }
    }
}