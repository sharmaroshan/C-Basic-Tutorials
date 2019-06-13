
#include<iostream>
#include<conio.h>

using namespace std; 

class Name 
{ 
    public: 
    string name; 
    
    void printname() 
    { 
       cout << "Geekname is: " << geekname; 
    } 
}; 
  
int main() { 
  
    Name obj1; 
    obj1.name = "Abhi"; 
    obj1.printname(); 
    return 0; 
} 
