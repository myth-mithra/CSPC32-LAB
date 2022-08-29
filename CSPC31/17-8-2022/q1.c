#include <stdio.h>

void main() {
    int a,b,c,max,min;
    printf("Enter 3 integers:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b){
        if (a>c) {
            max = a;
        }
        else {
            if (c>b) {
                max = c;
            }
            else {
                max = b;
            }
        }
    }
    else {
        if (b>c){
            max = b;
        }
        else {
            max = c;
        }
    }
    if (a<b){
        if (a<c) {
            min = a;
        }
        else {
            if (c<b) {
                min = c;
            }
            else {
                min = b;
            }
        }
    }
    else {
        if (b<c){
            min = b;
        }
        else {
            min = c;
        }
    }
    printf("%d is greatest.\n%d is smallest.\n",max,min);
    float A,B,C,Max,Min;
    printf("Enter 3 decimal numbers:");
    scanf(" %f %f %f",&A,&B,&C);
    if (A>B){
        if (A>C) {
            Max = A;
        }
        else {
            if (C>B) {
                Max = C;
            }
            else {
                Max = B;
            }
        }
    }
    else {
        if (B>C){
            Max = B;
        }
        else {
            Max = C;
        }
    }
    if (A<B){
        if (A<C) {
            Min = A;
        }
        else {
            if (C<B) {
                Min = C;
            }
            else {
                Min = B;
            }
        }
    }
    else {
        if (B<C){
            Min = B;
        }
        else {
            Min = C;
        }
    }
    printf("%f is greatest.\n%f is smallest.\n",Max,Min);
}