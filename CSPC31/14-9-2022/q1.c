#include <stdio.h>
#include <stdlib.h>

struct Student {
	int roll_num;
	char name[50];
	int marks[5];
	int total;
	float average;
	char grade;
};

void main() {
	int n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	struct Student* ptr = (struct Student*)malloc(n*sizeof(struct Student));
	for (int i = 0; i < n; i++){
		printf("Enter student-%d details:\n",i+1);
		printf("Roll number: ");
		scanf("%d",&((ptr+i)->roll_num));
		printf("Name: ");
		scanf("%s",(ptr+i)->name);
		printf("Enter marks:\n");
		int sum = 0;
		for (int j = 0; j < 5; j++){
			printf("Subject-%d: ",j+1);
			scanf("%d",&((ptr+i)->marks[j]));
			sum += (ptr+i)->marks[j];
		}
		(ptr+i)->total = sum;
		(ptr+i)->average = (ptr+i)->total/5;
		if ((ptr+i)->average >= 90){
			(ptr+i)->grade = 'S';
		}
		else if ((ptr+i)->average >= 80 && (ptr+i)->average < 90){
			(ptr+i)->grade = 'A';
		}
		else if ((ptr+i)->average >= 70 && (ptr+i)->average < 80){
			(ptr+i)->grade = 'B';
		}
		else if ((ptr+i)->average >= 60 && (ptr+i)->average < 70){
			(ptr+i)->grade = 'C';
		}
		else if ((ptr+i)->average >= 50 && (ptr+i)->average < 60){
			(ptr+i)->grade = 'D';
		}
		else if ((ptr+i)->average >= 40 && (ptr+i)->average < 50){
			(ptr+i)->grade = 'E';
		}
		else {
			(ptr+i)->grade = 'F';
		}
	}
	printf("\nStudents details:\n\n");
	printf("Roll number\tName\tMark-1\tMark-2\tMark-3\tMark-4\tMark-5\tTotal\tAverage\tGrade\n\n");
	for (int i = 0; i < n; i++){
		printf("%d\t\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\t%c\n",(ptr+i)->roll_num,(ptr+i)->name,(ptr+i)->marks[0],(ptr+i)->marks[1],(ptr+i)->marks[2],(ptr+i)->marks[3],(ptr+i)->marks[4],(ptr+i)->total,(ptr+i)->average,(ptr+i)->grade);
	}
}
