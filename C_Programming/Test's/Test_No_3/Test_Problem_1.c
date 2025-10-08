/*WAP print even and odd num in the given range
eg i/p start = 10, end =25
o/p odd = 11 13 15 17 19 21 23 25*/

void main()
{
	int start = 10, end =25;
	int i;
	{
		for (int i = start; i <= end ; i++)
		{
			if(i % 2 != 0)
			{
				printf("Odd number = %d\n", i);
			}
		}
	}
}
