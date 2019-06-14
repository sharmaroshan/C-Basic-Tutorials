#include<iostream>
#include<conio.h>
using namespace std;

class A
{
int a,b;
public:
  void input()
  {
  }
  void show()
  {
  }
  void increment(A obj)
  {
  obj.a++; obj.b++;
  a++;b++;
  }
 }
 
int main()
{
 A obj1, obj2;
 obj1.input();
 obj2.input();
 obj1.increment(obj2);
 obj1.show();
 obj2.show();
 }
