/* Sum of numbers in given range.
Find sum of numbers from start to end.
Input: start = 1, end = 5
Output: 15 */

/*
//TYPE 1

void sum_range();  // Function declaration
void main()
{
    sum_range();  // Call function
}

void sum_range()
{
    int start = 1, end = 5;
    int sum = 0;
    int i = start;

    while(i <= end)
    {
        sum = sum + i;
        i++;
    }

    printf("Start = %d\nEnd = %d\nSum = %d\n", start, end, sum);
}
*/


/*
//TYPE 2

void sum_range(int start, int end);  // Function declaration
void main()
{
    int start = 1, end = 5;
    sum_range(start, end);  // Pass start and end
}

void sum_range(int start, int end)
{
    int sum = 0;
    for(int i = start; i <= end; i++)
    {
        sum += i;
    }
    printf("Start = %d\nEnd = %d\nSum = %d\n", start, end, sum);
}
*/


/*
//TYPE 3

int sum_range();  // Function declaration
void main()
{
    int total = sum_range();  // Call function
    printf("Sum = %d\n", total);
}

int sum_range()
{
    int start = 1, end = 5;
    int sum = 0;
    
    for(int i = start; i <= end; i++)
    {
        sum += i;
    }
    return sum;  // Return the sum
}
*/

//TYPE 4

int sum_range(int start, int end);  // Function declaration
void main()
{
    int start = 1, end = 5;
    int total = sum_range(start, end);  // Pass range and get sum
    printf("Start = %d \nEnd = %d\n Sum = %d\n", start, end, total);
}

int sum_range(int start, int end)
{
    int sum = 0;
    for(int i = start; i <= end; i++)
    {
        sum += i;
    }
    return sum;  // Return sum
}
