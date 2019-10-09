#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	cout<<"Given Grammar is \nE->E+T|F\nF->id"<<endl;
	char a1[10],a2[10];
	strcpy(a1,"E->E+T|F");
	strcpy(a2,"F->id");
	int i,j;
	int l,l2;
	char t1,t2;
	l=strlen(a1);
	l2=strlen(a2);
	t1=a1[0];
	for(i=0;i<l;i++)
	{
		if(a1[i]=='>')
		{
			j=i+1;
			t2 = a1[j];
		}
		
	}
	if(t1==t2)
	{
		cout<<"......Left Recursion is......."<<endl;
		

cout<<"E->"<<a1[--l]<<"E'"<<endl;
		cout<<"E'->";
		for(i=1; a1[i]!='E';i++)
		{
		
		}
		for(++i;a1[i]!='|';i++)
		{
			cout<<a1[i];
		}		
		cout<<"E'|EPSILON";
		cout<<endl;
		for(i=0;i<l2;i++)
		{
			cout<<a2[i];
		}
	}
}
