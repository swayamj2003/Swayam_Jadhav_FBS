
//2. strcpy() ? Copy one string into another

#include<stdio.h>
#include<string.h>
void main()
{
	char arr1[]= "Hello";
	char arr2[20];
	
	strcpy(arr2, arr1);	
	printf("coppy: %s", arr2);
	
}