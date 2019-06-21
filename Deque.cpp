#include<iostream>
#include<deque>
using namespace std;

int main()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(50);
	d.push_back(11);
	d.push_back(21);
	
	deque<int>::iterator itr = d.begin();
	for(itr = d.begin();itr!=d.end();++itr)
		cout<<*itr<<" ";
	d.pop_back();
	cout<<"\n After Deleting...\n";
	itr = d.begin();
	
	for(itr=d.begin();itr!=d.end();++itr)
		cout<<*itr<<" ";
	d.pop_front();
	cout<<"\n After Deleting...\n";
	itr = d.begin();
	for(itr=d.begin();itr!=d.end();++itr)
		cout<<*itr<<" ";
	return 0;
	
}
