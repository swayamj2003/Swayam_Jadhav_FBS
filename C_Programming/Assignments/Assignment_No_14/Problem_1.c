//1. Student (rollNo, name, marks)
#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	int marks;	
};

void main()
{
	struct student s1,s2;
	
	printf("Marks of student 1 \n");
	s1.rollno=100;
	strcpy(s1.name, "swayam");
	s1.marks=89;
	
	printf("Roll No =%d \n",s1.rollno);
	printf("Name =%s \n",s1.name);
	printf("Marks =%d \n",s1.marks);
	
	printf("\nMarks of student 1 \n");
	
	printf("Enter Roll No");
	scanf("%d",&s2.rollno);
	printf("Enter Name");
	scanf("%s",s2.name);
	printf("Enter marks");
	scanf("%d",&s2.marks);
	
	printf("\nRoll No =%d \n",s2.rollno);
	printf("Name =%s \n",s2.name);
	printf("Marks =%d \n",s2.marks);
}

/*
//1. Student (rollNo, name, marks)
struct student 
{
	int rollno;
	char name[20];
	int marks;
};

struct student inputstudent();
void dispalay(struct student x);
void main()
{
	struct student s1,s2;

	s1 = inputstudent();
	s2 = inputstudent();
	
	display(s1);
	display(s2);
}

struct student inputstudent()
{
	struct student s;
	
	printf("Enter Roll no");
	scanf("%d",&s.rollno);
	printf("Enter name");
	scanf("%s",s.name);
	printf("Enter marks");
	scanf("%d",&s.marks);
	return s;
}

void display(struct student x)
{
	printf("\nRoll no: %d \n",x.rollno);
	printf("Name: %s \n",x.name);
	printf("Marks: %d \n",x.marks);
}
*/