//Write a C program to input marks of five subjects, find the total marks, and calculate the percentage.
//Total marks
//Marks/ sum of subject

void main()
{
	int marathi,hindi,english,science,maths;
	int Total, percentage;
	
	marathi=60;
	hindi=55;
	english=70;
	science=75;
	maths=80;
	
	Total=marathi+hindi+english+science+maths;
	printf("Total=%d\n",Total);
	
	percentage=Total/5;
	printf("percentage=%d\n",percentage);
}