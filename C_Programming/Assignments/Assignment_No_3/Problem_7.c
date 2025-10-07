/*Find factorial of given number.
Input: n = 5
Output: 120

Example - 5! = 5 × 4 × 3 × 2 × 1 = 120 */

//using while loop

/*void main()
 {
    int n = 5;        
    int fact = 1;
    int i = 1;

    while (i <= n) 
	{
        fact = fact * i;
        i++;
    }

    printf("Factorial of %d\n %d\n", n, fact);
 }*/
 
// using for loop 
 
void main()
 {        
 	int n = 5;
    int fact = 1;

    for (int i = 1; i <= n; i++) 
	{
        fact = fact * i;
    }

    printf("Factorial of %d\n %d\n", n, fact);
 }