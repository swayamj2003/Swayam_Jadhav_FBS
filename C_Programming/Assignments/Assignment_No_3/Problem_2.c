/*Print table for given number.
Input: n = 5
Output: 5 10 15 20 25 30 35 40 45 50*/

// using while loop

/*void main()
{
	int n=5;
	int table;
	for(int i=1;i<=10;i++)
	{
		table=i*n;
		printf("%d\n",table);
	}
}*/

// Using for loop 

void main()
{
	int i=1;
	int n=5;
	int table;
	while(i<=10)
	{
		table=i*n;
		printf("%d\n",table);
		i++;
	}
}