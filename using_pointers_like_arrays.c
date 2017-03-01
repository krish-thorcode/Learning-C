void pass_int(int *don)
{
	printf("%d\n",don[2]);
}
void pass_char(char *haha)
{
	printf("%c",haha[2]);
}
int main()
{
	char haha[]="krishna";
	int don[]={1,2,3,4};
	pass_int(don);
	pass_char(haha);
}
