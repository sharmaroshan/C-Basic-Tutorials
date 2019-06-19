int what()
{
  int i = 25;
  int j = 0;
  float k = 0;
  try
  {
    k = division(i, j);
    cout<<k<<endl;
  }
  catch
  {
    cout<<e<<endl;
  }
   return 0;
}


#include<iostream>
using namespace std;

class MyException : public exception
{
   public:
      const char * what() const throw()
      {
          return "Attempted to divide by Zero!";
      }
};
int main()
{
   try
   {
     int x, y;
     cout<<"Enter the two Numbers:\n";
     cin>>x>>y;
     if(y == 0)
     {
       MyException z;
       throw z;
     }
     else
     {
        cout<<"x/y = "<<x/y<<endl;
     }
   }
   catch(exception& e)
   {
     cout<<e.what();
     
   }
}
