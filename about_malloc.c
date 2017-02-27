//A CHARACTER POINTER CAN BE USED AS A STRING!! AGAIN REPEATEDD, A CHARACTER POINTER CAN BE USED AS A STRING!! 
//so any pointer that holds the address to a dynamically allocated memory space can also be used as an array of chars.
//have used char pointers in such way in the task3.c in Data-Structures repo.
int main()
{
	char *p,*q;
	char s[]="krishna";
	q=s;
	q[2]='p';
	printf("%s\n",s);
	p=(char*)malloc(20);
	p[0]='k';
	printf("%c\n",p[0]);
	q=(char*)malloc(2);
	q[0]='k';
	printf("%c\n",q[0]);
	printf("%s\n",q);
}
