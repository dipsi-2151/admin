#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	cout<<"Given Grammar is A -> aA|a"<<endl;
	char a1[20];
	strcpy(a1, "A->aA|a");
	int i,j;
	int l;
	char t1,t2;
	l=strlen(a1);
	for(i=0;i<l;i++)
	{
		if(a1[i]=='>')
		{
			j=i+1;
			t1 = a1[j];
		}
		if(a1[i]=='|')
		{
			j=i+1;
			t2 = a1[j]; 
		}
	}
	if(t1==t2)
	{
		for(i=0; a1[i]!=t1; i++)
		

{}
		cout<<"A->"<<t1<<"A'"<<endl;
		cout<<"A'->"<<a1[++i];
		for(;a1[i]!=t2;i++)
		{}
		if(a1[++i]==0 )
			cout<<"|EPSILON";
		else
			cout<<"|"<<a1[i];
	}
}
