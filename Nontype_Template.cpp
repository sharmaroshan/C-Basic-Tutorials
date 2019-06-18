#include<iostream>
using namespace std;

template<class T, int size>
class Array
{
    T a[size];
    public:
       void get()
       {
        for(i = 0, i<size, i++)
        {
          cin>>a[i];
        }
        void show()
        {
          for(i = 0, i<size, i++)
          {
          cout<<a[i]<<" ";
          }
     };
     
     main()
     {
       Array< int, 10> objint;
       Array< char, 5> objchar;
       objint.get();
       objint.show();
       objchar.get();
       objchar.show();
     }
