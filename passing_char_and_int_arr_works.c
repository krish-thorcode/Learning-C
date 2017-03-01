#include<stdio.h>
void pass(char simply[])
{
	printf("%s",simply);
}
void pass_int(int hahaha[])
{
	printf("\n%d",hahaha[2]);
}
int main()
{
	char don[]="krisna";
	pass(don);
	int haha[]={1,2,3,4,5};
	pass_int(haha);
}
