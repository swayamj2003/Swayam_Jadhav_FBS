#include <stdio.h>

void minutes(int min, int hr);
void main()
{
    int minutes, hours;
    printf("Enter the minutes: ");
    scanf("%d", &minutes);
	
	min_sec (&minutes, &hours);  // Function Call and store return value

}

void min_sec(int *min, int *hr)  // Function Definition
{
	
    *hr = *min / 60;
    printf("hours = %d\n", *hr);

    *min = *min % 60;
    printf("minutes = %d\n", *min);

}
