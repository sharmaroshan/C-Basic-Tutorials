#include<iostream>
using namespace std;

class B;
class A
{
    int a;
    public:
     void get(){}
     void show(){a}
   friend void add(A, B);
   };
class B{
   int b;
   public:
    void get(){}
    void show(){b}
  friend void add(A, B);
};
void add(A obja, B objb)
{
  obja.a = obja.a+1;
}

main()
{
 A obja;
 B objb;
 obja.get();
 objb.get();
 add(obja, objb);
 obja.show();
 objb.show();
 
 }
