//Write a program to check given 3 digit number is pallindrome or not.

void main()
{
	int no = 757;
	int r1,r2,r3,rev;
	int q1;
	
	r1 = no%10; //7
		printf("%d\n",r1);
	q1 = no/10; //75
//		printf("%d\n",q1);
	r2 = q1%10; //5
		printf("%d\n",r2);
	r3 = q1/10; //7
		printf("%d\n",r3);

	rev = r1*100 + r2*10 + r3;
	printf("Reverse = %d\n",rev); //757
	
	if(rev == no)
	{
		printf("No is pallindrome");
	}
	else
	{
		printf("No is Not pallindrome");
	}
}
