#include <stdio.h>
#include <stdlib.h>

#define Name "Timur"
#define LastName "Balaban"
#define GroupName "PE-21"
#define Faculty "RTF"
#define University "KPI"

int main()
{
    unsigned int age;
	unsigned int semestr;
	float admissionScore;
	int grade1;
	int grade2;
	int grade3;
	int grade4;
	int grade5;
	double averageGrade;

	printf("%s %s, Follow commands:\n", Name, LastName);
	printf("What is your age?");
	scanf("%u", &age);
	printf("Semester number: ");
	scanf("%u", &semestr);
	printf("What is your admission score? ");
	scanf("%f", &admissionScore);
	printf("Your grade 1 ");
	scanf("%d", &grade1);
	printf("Your grade 2 ");
	scanf("%d", &grade2);
	printf("Your grade 3 ");
	scanf("%d", &grade3);
	printf("Your grade 4 ");
	scanf("%d", &grade4);
	printf("Your grade 5 ");
	scanf("%d", &grade5);
	averageGrade = (double)(grade1+grade2+grade3+grade4+grade5) / 5;

	system("cls");
	printf("%s", University);
	printf("\n%s", Faculty);
	printf("\n%s", GroupName);
	printf("\n***************");
	printf("\n Student: %s %s", Name, LastName);
	printf("\n Age: %u", age);
	printf("\n Semestr: %u", semestr);
	printf("\n===============");
	printf("\n Admission score: %.1f", admissionScore);
	printf("\n Average grade = %.2lf", averageGrade);
	printf("\n");

	return 0;

}
