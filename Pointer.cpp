#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int *ptr;
	ptr = &a;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	cout<<&ptr<<endl;
	
	int **ptr1;
	ptr1 = &ptr;
	cout<<ptr1<<endl;
	cout<<*ptr1<<endl;
	cout<<**ptr1<<endl;
}
