#include<bits/stdc++.h>
using namespace std;

void increase(void *data, int ptrsize)
{
	if(ptrsize == sizeof(char))
	{
		char *ptrchar;
		ptrchar = (char*)data;
		(*ptrchar)++;
		cout<<"data points to a char"<<endl;
	}
    else if(ptrsize == sizeof(int))
    {
    	int *ptrint;
    	ptrint = (int*)data;
    	(*ptrint)++;
    	cout<<"*data points to an int"<<endl;
	}
}
void call()
{
	char c = 'x';
	int i = 10;
	increase(&c, sizeof(c));
	cout<<"The new value of c is :"<<c<<endl;
	increase(&i, sizeof(i));
	cout<<"The new value of i";
	
}
int main()
{
	call();
}
