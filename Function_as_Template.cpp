#include<iostream>
using namespace std;

template< class T>
void swap(T a, T b)
{
  a = a+b;
  b = a-b;
  a = a-b;
  cout<<a<<b;
}
main()
{
 swap(10, 20);
 swap('a', 'b');
 swap(10.10, 20.6);
}
