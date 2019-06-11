#include<iostream.h>
#include<conio.h>

void main()
{
int a[100];
int size, up, i, s;
clrscr();
while(1){
  cout<<"\nEnter Size of Array:";
  cin>>size;
  if(size > 0 && size < 100)
    break;
    }
    
cout<<"\nEnter Array Elements:";
for(i = 0; i< size; i++)
    cin>>a[i];
    
cout<<"\nEnter No :";
cin>>s;
for(i = 0; i < size; i++){
     if(s == a[i]){
        cout<<"\n Value found at Index"<<i;
        cout<<"\n Enter Updated Value:";
        cin>>up;
        a[i] = up;
        }
       }
cout<<"\n Afetr Searching:";
for(i = 0; i < size; i++)
   cout<<a[i]<<" ";
   
getch();
