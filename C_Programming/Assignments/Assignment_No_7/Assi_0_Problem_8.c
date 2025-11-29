#include <stdio.h>

void percentage(int *marathi, int *hindi, int *english, int *science, int *maths);   // Function Declaration

void main()
{
	int marathi, hindi, english, science, maths;
    int Total, percent;

    printf("Enter Five Subject Marks :\n 1.Marathi, 2.Hindi, 3.English, 4.Science, 5.Maths ");
    scanf("%d%d%d%d%d", &marathi, &hindi, &english, &science, &maths);
    
   	percentage(&marathi, &hindi, &english, &science, &maths);   // Function Call and store return value

}

void percentage(int *marathi, int *hindi, int *english, int *science, int *maths)    // Function Definition
{
    int Total, Percent;
    Total = (*marathi) + (*hindi) + (*english) + (*science) + (*maths);
    printf("Total = %d\n", Total);

    Percent = Total / 5;
    printf("Percentage = %d\n", Percent);   // Return the calculated percentage
}
