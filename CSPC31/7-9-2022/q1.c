#include <stdio.h>
#include <stdlib.h>

void main() {
	int r1,r2,c1,c2;
	printf("Enter number of rows for matrix 1: ");
	scanf("%d",&r1);
	printf("Enter number of columns for matrix 1: ");
	scanf("%d",&c1);
	printf("Enter number of rows for matrix 2: ");
	scanf("%d",&r2);
	printf("Enter number of columns for matrix 2: ");
	scanf("%d",&c2);
	
	if (c1 != r2){
		printf("Matrix multiplication is not possible.");
	}
	else {
		int **m1 = (int**)malloc(r1*sizeof(int));
		int **m2 = (int**)malloc(r2*sizeof(int));
		int **m = (int**)malloc(r1*sizeof(int));
		
		for (int i = 0; i < r1; i++){
			m1[i] = (int*)malloc(c1*sizeof(int));
		}
		
		for (int i = 0; i < r2; i++){
			m2[i] = (int*)malloc(c2*sizeof(int));
		}
		
		for (int i = 0; i < r1; i++){
			m[i] = (int*)malloc(c2*sizeof(int));
		}
		
		printf("Enter matrix-1 elements:\n");
		
		for (int i = 0; i < r1; i++){
			for (int j = 0; j < c1; j++){
				scanf("%d",&m1[i][j]);
			}
		}
		
		printf("Enter matrix-2 elements:\n");
		
		for (int i = 0; i < r2; i++){
			for (int j = 0; j < c2; j++){
				scanf("%d",&m2[i][j]);
			}
		}
		
		for (int i = 0; i < r1; i++){
			for (int j = 0; j < c2; j++){
				m[i][j] = 0;
				for (int k = 0; k < c1; k++){
					m[i][j] += m1[i][k]*m2[k][j];
				}
			}
		}
		
		printf("Matrix obtained after multiplication:\n");
		
		for (int i = 0; i < r1; i++){
			for (int j = 0; j < c2; j++){
				printf("%d ",m[i][j]);
			}
			printf("\n");
		}
		
		for (int i = 0; i < r1; i++){
			free(m1[i]);
		}
		
		for (int i = 0; i < r2; i++){
			free(m2[i]);
		}
		
		for (int i = 0; i < r1; i++){
			free(m[i]);
		}
		
		free(m1);
		free(m2);
		free(m);
		
	}
}
