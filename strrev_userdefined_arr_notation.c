int xstrlen(char s[])
{
    int i=0;
    for(i=0;s[i]!='\0';i++)
        continue;
    return(i);
}
void xstrrev(char s[])
{
    int len=xstrlen(s);
    int i;
    char aux;
    for(i=0;i<len/2;i++)
    {
        aux=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=aux;
    }
}
int main()
{
    char s[]="krisna";
    xstrrev(s);
    printf("%s",s);
}

