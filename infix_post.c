#include<stdio.h>
#include<ctype.h>
void push(char);
int priority(char);
char pop();
struct stack
{
	char a[25];//it will be used to push the operators based on the conditions and priorities.
	int top;
}st;
int main()
{
	char *term,infix[25],postfix[25];//infix stores the terms in infix notation, postfix stores the terms in postfix notation.//term holds the adress of 
	//each term in the exp
	st.top=-1;
	int j=0;//j will store the index of postfix
	term=infix;
	printf("Enter the infix expression: ");
	scanf("%s",infix);
	while(*term!='\0')
	{
		if(isalnum(*term))
		postfix[j++]=*term;
		else if(*term=='(')
		push(*term);
		else if(*term==')')
		{
			while(st.a[st.top]!='(')//until we get opening braces...
			postfix[j++]=pop();//...do this
			pop();//we don't need paranthesis in a postfix, but we do need other operators! so popped operators were being collected and added to the postfix
			//array
		}
		else if(st.top==-1||st.a[st.top]=='(')
		push(*term);
		else if(priority(*term)>priority(st.a[st.top]))
		push(*term);
		else
		{
			while((priority(*term)<priority(st.a[st.top]))&&st.top!=-1)
			postfix[j++]=pop();
			push(*term);
		}
		term++;
	}
	while(st.top!=-1)
	postfix[j++]=pop();
	postfix[j]='\0';
	printf("The postfix of the given prefix is: %s",postfix);
}
void push(char x)
{
	st.a[++st.top]=x;
}
char pop()
{
	char x;
	x=st.a[st.top];
	st.top--;
	return x;
}
int priority(char x)
{
	switch(x)
	{
		case '-':
			return 0;
			case '+':
				return 1;
				case '*':
					return 2;
					case '/':
						return 3; 
					
	}
}
