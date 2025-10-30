//Write a C program to input marks of five subjects, find the total marks, and calculate the percentage.
//Total marks
//Marks/ sum of subject

/*void main()
{
	int marathi,hindi,english,science,maths;
	int Total, percentage;
	
	marathi=60;
	hindi=55;
	english=70;
	science=75;
	maths=80;
	
	Total=marathi+hindi+english+science+maths;
	printf("Total=%d\n",Total);
	
	percentage=Total/5;
	printf("percentage=%d\n",percentage);
}*/

/*
//TYPE ONE
#include <stdio.h>

void percentage();   // Function Declaration

void main()
{
    percentage();    // Function Call
}

void percentage()    // Function Definition
{
    int marathi, hindi, english, science, maths;
    int Total, percentage;

    marathi = 60;
    hindi = 55;
    english = 70;
    science = 75;
    maths = 80;

    Total = marathi + hindi + english + science + maths;
    printf("Total = %d\n", Total);

    percentage = Total / 5;
    printf("Percentage = %d\n", percentage);
}
*/


/*
//TYPE TWO
#include <stdio.h>

void percentage(int marathi, int hindi, int english, int science, int maths);  // Declaration

void main()
{
    int m1, h1, e1, s1, ma1;

    printf("Enter marks of Marathi, Hindi, English, Science, Maths: ");
    scanf("%d%d%d%d%d", &m1, &h1, &e1, &s1, &ma1);

    percentage(m1, h1, e1, s1, ma1);  // Function Call with arguments
}

void percentage(int marathi, int hindi, int english, int science, int maths)
{
    int Total, percent;

    Total = marathi + hindi + english + science + maths;
    printf("Total = %d\n", Total);

    percent = Total / 5;
    printf("Percentage = %d\n", percent);
}
*/


/*
//TYPE THREE
#include <stdio.h>

int percentage();   // Function Declaration

void main()
{
    int per;
    per = percentage();   // Function Call and store return value

    printf("Percentage = %d\n", per);
}

int percentage()    // Function Definition
{
    int marathi, hindi, english, science, maths;
    int Total, percent;

    printf("Enter marks of Marathi, Hindi, English, Science, Maths: ");
    scanf("%d%d%d%d%d", &marathi, &hindi, &english, &science, &maths);

    Total = marathi + hindi + english + science + maths;
    printf("Total = %d\n", Total);

    percent = Total / 5;
    return percent;   // Return the calculated percentage
}
*/



//TYPE FOUR
#include <stdio.h>

int percentage(int marathi, int hindi, int english, int science, int maths);  // Declaration

void main()
{
    int m1, h1, e1, s1, ma1, per;

    printf("Enter marks of Marathi, Hindi, English, Science, Maths: ");
    scanf("%d%d%d%d%d", &m1, &h1, &e1, &s1, &ma1);

    per = percentage(m1, h1, e1, s1, ma1);   // Function Call with arguments

    printf("Percentage = %d\n", per);
}

int percentage(int marathi, int hindi, int english, int science, int maths)
{
    int Total, percent;

    Total = marathi + hindi + english + science + maths;
    printf("Total = %d\n", Total);

    percent = Total / 5;
    return percent;   // Return the calculated percentage
}
