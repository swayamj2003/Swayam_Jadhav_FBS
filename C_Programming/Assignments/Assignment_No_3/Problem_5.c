/*Check the given number is Armstrong number or not..
Input: n = 153
Output: Armstrong*/

/*153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153 → Armstrong*/

void main()
{
//	int no = 153;
	int temp = no;
	int sum = 0;
	int digit;
	
	for(int no = 153; no > 0; no = no / 10)
//	while (no > 0)
	{
		digit =  no % 10;
		sum = sum + (digit * digit * digit);
	//	no = no / 10;
	}
	
	if (sum == temp)
	{
		printf("Armstrong");
	}
	else
	{
		printf("Not Armstrong");
	}
}

/*
void main()
{
	int no = 153;
	int temp = no;
	int sum = 0;
	int digit;
	
	while (no > 0)
	{
		digit =  no % 10;
		sum = sum + (digit * digit * digit);
		no = no / 10;
	}
	
	if (sum == temp)
	{
		printf("Armstrong");
	}
	else
	{
		printf("Not Armstrong");
	}
}
*/