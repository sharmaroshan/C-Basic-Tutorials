#include<iostream>
#include<fstream>
#inclue<string>
using namespace std;

int main()
{
    string name "Roshan Sharma";
    int regno = 11613314;
    int phoneno = 8249411154;
    string emailid = "roshansharma@gmail.com";
    
   
    ofstream ofs;
    ofs.open("demo.txt");
    ofs<<regno<<"\t"<<name<<"\t"<<phoneno<<"\t"<<emailid;
    ofs.close();
    
    
    regno = 0;
    name = "";
    phoneno = "";
    emailid = "";
    ifstream ifs;
    ifs.open("demo.txt");
    ifs>>rollno>>name>>email>>phoneno;
    cout<<endl<<regno<<endl<<name<<endl<<phoneno<<endl<<email;
    
}
