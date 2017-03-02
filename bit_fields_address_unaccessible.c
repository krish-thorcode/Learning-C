#include<stdio.h>
int main()
{
	int i;
	struct date
	{
		unsigned day:5;
		unsigned month:4;
		unsigned year:12;
	}dt;
	for(i=0;i<=9;i++)
	{
		printfa("enter the date of joining of emp %d in DDMMYYYY: ",i+1);
		scanf("%u%u%u",&dt.day,&dt.month,&dt.year);
	}
}
