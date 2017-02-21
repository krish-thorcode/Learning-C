int main()
{
	char s[]="krishna";
	char p[30]="kumar";
	p[0]="mahto";
	printf("%s",p);
	strcat(s,p);
	printf("%s",s);
}
