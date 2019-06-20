#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
  int sz, p=1;
  int i, j;
  vector<int> v;
  vector<int> v1;
  cout<<"\n Enter Size:";
  cin>>sz;
  cout<<"\n Enter"<<sz<<"Elements of Vector :";
  for(i=0;i<sz;i++)
  {
  	int temp;
  	cin>>temp;
  	v.push_back(temp)
  }
  sort(v.begin(), v.end()));
  cout<<" ";
  for(i=0;i<sz,i++)
  {
  	cout<<v[i]<<" ";
  }
  for(i=0;i<v.size());i++)
  {
  	if(v[i+1]-v[i]==1)
  	   p++;
  	else
  	{
  		v1.push_back(p);
  		p=1;
	  }
  	    
  }
  cout<<"\n Subsequence Vectors";
  cout<<endl;
  for(i=0;i<v1.size();i++)
  {
  	if(v1[i] ==1)
  	{
  		first++;
  		continue;
	  }
	  cout<<endl;
	  int len = first + v1[i];
	  for(j = first; j<len; j++)
	  {
	  	cout<<v[j]<<" ";
	  	first++;
	  }
  }
}
