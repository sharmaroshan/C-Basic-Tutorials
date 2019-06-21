#include<iostream>
#include<vector>
using namespace std;

int bill(int unit)
{
	int sum = 1;
	for(int i=1;i<=unit;i++)
	{
		if(i>1 && i<=99)
	    	sum=sum+3;
	    else if(i>=101 && i<=199)
	    	sum=sum=5;
	    else if(i>200 && i<= 299)
	    	sum=sum+6;
	    else
	    	sum=sum+7;
	}
	return sum;
}
int main()
{
	vector<int> units;
	int sz;
	cout<<"Enter No. of Units :";
	cin>>sz;
	for(int i=0;i<sz;i++)
	{
		int temp;
		cout<<"\n Enter "<<i+1<<" units:";
		cin>>temp;
		units.push_back(temp);
	}
	for(int i=0;i<sz;i++)
	{
		int sum;
		int (*ptr)(int);
		ptr=&bill;
		cout<<"\n Bill of "<<units[i]<<" is:"<<ptr(units[i]);
	}
}
