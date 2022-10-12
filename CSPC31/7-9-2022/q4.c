#include <stdio.h>
#include <stdlib.h>

void main() {
	int n,c = 0,x;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	int *arr = (int *)malloc(n*sizeof(int));
	
	printf("Enter array elements:\n");
	for (int i = 0; i < n; i++){
		scanf("%d",(arr+i));
	}
	
	printf("Enter element to search: ");
	scanf("%d",&x);
	
	for (int i = 0; i < n; i++){
		if (x == *(arr+i)){
			printf("%d is found at index %d.",x,i);
			c += 1;
		}
	}
	
	if (c == 0){
	printf("%d is not found.",x);
	}

	free(arr);
	
}
