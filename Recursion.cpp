# Recursion is a function which calls itself.

#include<iostream>
using namespace std;

int main()
{
int base, index;
cout<<"Enter Base and Index :";

cin>>base>>index;
power(base, index, index, 1);
}

void power(int b, int id, int i, int p)
{
  if(i>=1)
  {
  p = p*b;
  i--;
  power(b, id, i, p);
  }
  else
  {
  cout<<"Power is :"<<p;
  }
}
  
