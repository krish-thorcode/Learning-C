//A reason for using malloc()
//In the main functon in the first for loop I was thinking memory allocation is not required because I can always equate the pointers.
//Doing so didn't serve the purpose becasue each time the loop executedd, the value at the static address (non-changing address) p was getting overwritten by...
//...the newly entered value.
//So in the array of pointers created, each value in the array(note that values in the array are pointers) have the same value at the end of the program.
//Had I used malloc (P-362, 13th Edition, Yashwant Kanetkar) then each time p would have been assigned a different address corresponing to every memory allocated!
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *names[6];
	char n[50];
	int len,i;
	char *p;
	for(i=0;i<=5;i++)
	{
		puts("Enter name: ");
		scanf("%s",n);
		p=n;
		names[i]=p;
	}
	for(i=0;i<=5;i++)
	printf("%s",names[i]);
	return 0;
}
