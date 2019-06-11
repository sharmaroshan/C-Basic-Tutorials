#include<iostream.h>
#include<conio.h>

int main(){

string name[100], ch[100];
int m[100];
int size, marks, i;
cout<<"Enter size of Records :";
cin>>size;
for(i = 0; i <size; i++){
   cout<<"Enter the Name, Phone No. and Marks";
   cin>>name[i]<<"\t"<<ph[i]<<"\t"<<m[i];
   }
for(i = 0; i < size; i++)
{
cout<<endl<<name[i]<<"\t"<<ph[i]<<"\t"<<m[i];
}
cout<<"Enter Name:";
cin>>nm;
for(i = 0; i< size;i++)
{
  if(name[i] == nm){
      cout<<"\nName Found!!";
      cout<<"\nEnter Mobile Number and Marks:";
      cin>>ph>>m;
      m[i] = m;
      ph[i] = ph;
     }
}

for(i = 0; i <size; i++)
{
      cout<<endl<<name[i]<<"\t"<<ph[i]<<"\t"<<m[i];
}
return 0;
}
