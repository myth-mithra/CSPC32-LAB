#include <stdio.h>
#include <stdlib.h>

struct Employee {
	int emp_id;
	char name[50];
	double basic_pay;
	double da;
	double hra;
	double salary;
	double yearly_income;
	double income_tax;
};

void main() {
	int n;
	printf("Enter number of employees: ");
	scanf("%d",&n);
	struct Employee* ptr = (struct Employee*)malloc(n*sizeof(struct Employee));
	for (int i = 0; i < n; i++){
		printf("Enter employee-%d details:\n",i+1);
		printf("Employee ID: ");
		scanf("%d",&((ptr+i)->emp_id));
		printf("Name: ");
		scanf("%s",(ptr+i)->name);
		printf("Enter basic pay: ");
		scanf("%lf",&((ptr+i)->basic_pay));
		
		(ptr+i)->da = (ptr+i)->basic_pay * 0.38;
		(ptr+i)->hra = (ptr+i)->basic_pay * 0.18;
		(ptr+i)->salary = (ptr+i)->basic_pay + (ptr+i)->da + (ptr+i)->hra;
		(ptr+i)->yearly_income = (ptr+i)->salary * 12;
		
		
		if((ptr+i)->yearly_income > 1000000) {
			(ptr+i)->income_tax = (ptr+i)->yearly_income * 0.2;
		}
		else if ((ptr+i)->yearly_income > 800000 && (ptr+i)->yearly_income <= 1000000) {
			(ptr+i)->income_tax = (ptr+i)->yearly_income * 0.15;
		}
		else if ((ptr+i)->yearly_income > 600000 && (ptr+i)->yearly_income <= 800000) {
			(ptr+i)->income_tax = (ptr+i)->yearly_income * 0.1;
		}
		else if ((ptr+i)->yearly_income > 400000 && (ptr+i)->yearly_income <= 600000) {
			(ptr+i)->income_tax = (ptr+i)->yearly_income * 0.07;
		}
		else {
			(ptr+i)->income_tax = (ptr+i)->yearly_income * 0.02;
		}
	}
	printf("\nEmployee details:\n\n");
	printf("Employee Id\tName\tBasic Pay\tDA\tHRA\tSalary\tYearly Income\tIncome Tax\n\n");
	for (int i = 0; i < n; i++){
		printf("%d\t\t%s\t%.2lf\t%.2lf\t%.2f\t%.2f %.2f\t%.2f\n",(ptr+i)->emp_id,(ptr+i)->name,(ptr+i)->basic_pay,(ptr+i)->da,(ptr+i)->hra,(ptr+i)->salary,(ptr+i)->yearly_income,(ptr+i)->income_tax);
	}
}
