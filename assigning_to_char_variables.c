//how assigning values to character variables work.
//below when i assigned a=5, I was expecting in a '5' (character 5 with ascii value 53 would get stored.
//but character with ascii value 5 (taash k patte wala symbol got stored insteadd!
int main()
{
	char a=5, b=6, c;
	c=a+b;
	printf("%c\n",a);
	printf("%d\n%d\n%d\n",c,a,b);
	printf("%d\n",'5'+'6');
}
