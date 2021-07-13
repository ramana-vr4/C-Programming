#include<stdio.h>
int main()
{
	printf("Enter the i :");//i=mark
	int i=0;
	scanf("%d",&i);
	
	if(i>=85 && i<=100)
	{
	printf("Grade A");	
	}
	if(i>=70 && i<=84)
	{
	printf("Grade B");	
	}
	if(i>=55 && i<=69)
	{
	printf("Grade C");	
	}
	if(i>=40 && i<=54)
	{
	printf("Grade D");	
	}
	if(i<40)
	{
	printf("Grade E");	
	}
}
