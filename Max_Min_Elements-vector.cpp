#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int SumOfDigits(int num)
{
   int sum=0;
   while(num!=0)
   {
       sum=sum+num%10;
       num=num/10;
   }
   return sum;
}

int main()
{
  vector<int>v,v1;
  int sz, i;
  int sum=0;
  cout<<"Enter size of vector:";
  cin>>sz;
  cout<<"Enter the Vectoe Elements:";
  for(i = 0;i<sz;i++)
  {
     int temp;
     cin>>temp;
     v.push_back(temp);
  }
  for(i=0;i<v.size();i++)
  {
     int sum=SumOfDigits(v[i]);
     v1.push_back(sum);
  }
  sort(v1.begin(), v1.end());
  cout<<"Maximum Element :"<<v1.begin();
  cout<<"Minimum Element :"<<v1.end();
  
  return 0;
}
