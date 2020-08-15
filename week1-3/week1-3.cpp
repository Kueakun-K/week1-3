#include<stdio.h>
int main() {
	float x[3], y[3],gpa;
	printf("Grade 1 : ");
	scanf_s("%f", &x[0]);
	printf("Credit 1: ");
	scanf_s("%f", &y[0]);
	printf("Grade 2 : ");
	scanf_s("%f", &x[1]);
	printf("Credit 2: ");
	scanf_s("%f", &y[1]);
	printf("Grade 3 : ");
	scanf_s("%f", &x[2]);
	printf("Credit 3: ");
	scanf_s("%f", &y[2]);
	gpa = ((x[0] * y[0]) + (x[1] * y[1]) + (x[2] * y[2])) / (y[0] + y[1] + y[2]);
	if (y[0] >0 && y[1] >0 && y[2] > 0 && x[0]<=4 && x[1] <= 4 && x[2] <= 4)
		printf("GPA : %.2f",gpa);
	else
		printf("Error");
	return 0;
}