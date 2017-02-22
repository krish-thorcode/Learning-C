//the result is as soon as the pointer is declared it starts pointing to a garbage memory address, i.e, it has some garbage address.
int main()
{
	int *ptr;
	printf("%u",ptr);
}
