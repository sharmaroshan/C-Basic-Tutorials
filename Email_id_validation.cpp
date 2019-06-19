#include<iostream>
#include<exception>
#include<string>
using namespace std;

class StringException : public exception
{
    pubic:
        const char * what() const throw()
        {
            return "Invalid mail id";
        }
 };
 bool checkEmail(string email)
 {
    bool val = False;
    int symbolCount = 0, dotcount = 0;
    for(int i = 0; i < email.length(); i++)
    {
        if(email[i] == '@')
           symbolCount++;
        
        else if(email[i] == '.')
           dotCount++;
    }
    if(symbolCount == 1 && dotCount > 0)
       val = true;
    return val;
}

int main()
{
   while(1)
   {
     bool val = True;
     string email;
     cout<<"Enter your Email Id :";
     getline(cin, email);
     cin.clear();
     try
     {
       if(!checkEmail(email))
       {
          StringException ex;
          throw ex;
        }
        break;
      }
      catch(exception& a)
      {
         cout<<a.what();
      }
   }
   return 0;
}   
    
