#include<stdio.h>          
#include<stdlib.h>	
#include<string.h>
void match(char t);        
void T();          
void TS();		
void F();      
void ES();     
void E();      
char l;
void main()
{	
	printf("Enter string \n");
	l=getchar();
	printf("\n\n Production symbol\n");	
	printf("\tE\t%c\n",l);
	E();	
}
void match(char t)
{
	if(t==l)		 

		l=getchar();			
	else		
		printf("\nerror\n");
}
void E()
{	
	printf("\tT\t%c\n",l);	 
	T();
	printf("\tES\t%c\n",l);	 
	ES();
}
void ES()
{	
	if(l=='+')
	{
		match('+');	 
		printf("\tE\t%c\n",l);	 
		E();
	}
	else	
		return;
}
void T()
{	
	printf("\tF\t%c\n",l);	 
	F();
	printf("\tTS\t%c\n",l);	 
	TS();
}

void TS()
{	
	if(l=='*')
	{
		match('*');	 
		printf("\tT\t%c\n",l);	 
		T();
	}
	else	
		return;
}
void F()
{	
	if(l=='(')
	{
		match('(');	
		printf("\tE\t%c\n",l);	 
		E();	
		match(')');
	}
	else	
		match('i');
}
