/*10. Print a hollow square with diagonal pattern
Input: n = 5
Output:

* * * * *
* *	    *
*   *   *
*     * *
* * * * *   */

void main()
{
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if(j==1||j==5||i==1||i==5||i==j)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
}