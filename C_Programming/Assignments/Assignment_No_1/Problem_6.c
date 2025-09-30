//Write a program to check whether a given character is uppercase or lowercase.
void main()
{
	char ch = 'B'; //66
//	char uppercase , lowercase;
	if(ch>='A' && ch<='Z')
	{
		printf("%d\nuppercase");
	}
	else
	{
		printf("%d\nlowercase");
	}
}

//Q) uppercase letter convert to lovercase && lovercase convert to uppercase

/*void main()
{
	char ch ='b';
	
	if(ch>='A' && ch<='Z')
	{
		ch=ch+32;
	}
	else
	{
		ch=ch-32;
	}
	printf("%c",ch);
}*/