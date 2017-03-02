#include<stdio.h>
#define EMP_NUM 3
int main()
{
	int i,j;
	unsigned int dy,mnth,yr,temp;
	struct date
	{
		unsigned day:5;
		unsigned month:4;
		unsigned year:12;
	}dt[10];
	for(i=0;i<=EMP_NUM-1;i++)
	{
		printf("enter the date of joining of emp %d ",i+1);
		scanf("%u%u%u",&dy,&mnth,&yr);
		dt[i].day=dy;
		dt[i].month=mnth;
		dt[i].year=yr;
	}
	for(i=0;i<EMP_NUM-1;i++)
	{
		for(j=0;j<EMP_NUM-1;j++)
		{
			if(dt[j].year>dt[j+1].year)
			{
				temp=dt[j].year;
				dt[j].year=dt[j+1].year;
				dt[j+1].year=temp;
			}
		}
	}
	for(i=0;i<=EMP_NUM-1;i++)
	printf("%u\n",dt[i].year);
	return 0;
}
