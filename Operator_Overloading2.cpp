#include<iostream>
using namespace std;

class Operation
{
   int a, b;
   public:
      void input()
      {
         cout<<"\n Enter two values:";
         cin>>a>>b;
      }
      void show()
      {
         cout<<"\n A = "<<a<<" and B = "<<b;
      }
      void operator ++()
      {
         a = a+1;
         b = b+1;
      }
};

int main()
{
    Operation task1, task2;
    task1.input();
    task2.input();
    task1.show();
    task2.show();
    ++task1;
    ++task2;
    task1.show();
    task2.show();
    return 0;
}
