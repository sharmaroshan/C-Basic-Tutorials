#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector<int>v1;
  int a = 10;
  int b = 20;
  v1.push_back(a);
  v1.push_back(b);
  v1.push_back(101);
  v1.push_back(202);
  
  for(vector<int>::iterator itr = v1.begin(); itr!= v1.end(); ++itr)
      cout<<*itr<<" ";
     
  v1.pop_back();
  cout<<"\n After pop back ";
  for(vector<int>::iterator itr = v1.begin(); itr!= v1.end(); ++itr)
      cout<<*itr<<" ";
}
