/* THE GRADING SYSTEM WILL BE APPLIED AS SHOWN IN THE TABLE GIVEN BELOW
1. IF MARKS<50 THEN GRADE IS 'F'
2. IF MARKS>=50<60 THEN GRADE IS 'D'
3. IF MARKS>=60<70 THEN GRADE IS 'C'
4. IF MARKS>=70<80 THEN GRADE IS 'B'
5. IF MARKS>=80<90 THEN GRADE IS 'A'
6. IF MARKS>=90 THEN GRADE IS 'E'*/


#include<stdio.h>
int main()
{
	int marks;
	printf("ENTER YOUR MARKS: ");
	scanf("%d",&marks);
	if(marks<0||marks>100)
	printf("WRONG ENTRY");
	else if(marks<50)
	printf("The grade is 'F'..");
	else if(marks>=50&&marks<60)
	printf("The grade is 'D'..");
	else if(marks>=60&&marks<70)
	printf("The grade is 'C'..");
	else if(marks>=70&&marks<80)
	printf("The grade is 'B'..");
	else if(marks>=80&&marks<90)
	printf("The grade is 'A'..");
	else
	printf("The grade is 'E'..");
	return 0;
	
}



