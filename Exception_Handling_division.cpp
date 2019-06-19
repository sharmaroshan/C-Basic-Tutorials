#include<iostream>
using namespace std;

int division()
{
  int a, b, c;
  cout<<"Enter the two numbers to divide :"<<a<<" "<<b;
  cin>>a>>b;
  if(b == 0)
  {
    throw "Error !";
  }
  else
  {
     c = a/b;
     cout<<"\nDivison :"<<c;
     cout<<"\n End of Program";
  }
}
int main()
{
  try
  {
    divison();
  }
  catch(int a)
  {
    cout<<"Exception Occured!!!";
  }
  catch(const char *e)
  {
    cout<<e<<endl;
  }
  
}
