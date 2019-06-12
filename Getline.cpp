#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

int main()
{
	string name, add;
	for(int i = 0; i <3; i++){
		cout<<"Name :";
		getline(cin, name);
		cout<<"Address :";
		getline(cin, add);
		cout<<endl<<name;
		cout<<endl<<add;
	}

}
