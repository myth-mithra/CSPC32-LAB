#include <stdio.h>

void main() {
    int l,u,c = 0,so = 0,se = 0;
    printf("Enter lower limit: ");
    scanf("%d",&l);
    printf("Enter upper limit: ");
    scanf("%d",&u);
    for (int i = l; i <= u; i++){
        int k = 0;
        for (int j = 2; j <= i/2; j++){
            if (i%j == 0){
                k = 1;
                break;
            }
        }
        if (k == 0 && i != 1){
            if (c%2 == 0){
                so += i;
                c ++;
            }
            else {
                se += i;
                c ++;
            }
        }
    }
    printf("Sum of primes at odd postions = %d\n",so);
    printf("Sum of primes at even postions = %d\n",se);
}