#include<iostream>
#include<conio.h>
using namespace std; 

class Name 
{ 
    public: 
    string name; 
    int id; 
    void printname(); 
    void printid() 
    { 
        cout << "Geek id is: " << id; 
    } 
}; 
  
// Definition of printname using scope resolution operator :: 
void Name::printname() 
{ 
    cout << "Geekname is: " <<name;  
} 
int main() { 
      
    Name obj1; 
    obj1.name = "Roshan"; 
    obj1.id=15; 
      
    obj1.printname(); 
    cout << endl;  
    obj1.printid(); 
    return 0; 
} 
