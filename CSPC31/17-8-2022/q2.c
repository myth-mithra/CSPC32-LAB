#include <stdio.h>

void main(){
    int a,b;
    printf("Enter lower limit: ");
    scanf("%d",&a);
    printf("Enter upper limit: ");
    scanf("%d",&b);
    printf("The prime numbers from %d to %d are:\n",a,b);
    for (int i = a+1; i <= b; i++){
        int c = 1;
        for (int j = 2; j <= i/2; j++){
            if (i % j == 0){
                c = 0;
                break;
            }
        }
        if (c == 1){
            printf("%d ",i);
        }
    }
}