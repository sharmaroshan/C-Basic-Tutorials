#include<iostream>
using namespace std;

int main()
{
int ct, in;
cout<<"Enter the Count:";
cin>>ct;
cout<<"Enter the no. of Intervals:";
cin>>in;
int a[in][2];
cout<<endl<<"Enter the Intervals:";
for(int i = 0; i<in; i++)
{
for(int j = 0; j <2; j++)
{
cin>>a[i][j];
}
for(int i = 0; i <in; i++)
{
for(int j = 0; j <2; j++)
{
cout<<a[i][j];
}
for(int i = 0; i <ct; i++)
{
int t;
cout<<"Enter the arrival Timing:";
cin>>t;
if(t>a[in-1][1])
cout<<"Error";
else
{
for(int j = 0; j<in; j++)
{
int flag = 0;
for(int k = 0; k <2; k++)
{
int start, endpt;

if(k==0)
{
start = a[j][k];
endpt = a[j][k+1];
if(t>=start && t < endpt)
{
cout<<"Np Wait";
flag = 1;
}
else if(t < start)
{
cout<<"Wait for :"<<start-t;
flag = 1;
}
else if(t == endpt)
{
cout<<"Wair for :"<<(a[j+1][k]-t);
flag = 1;
}
}
}
if(flag == 1)
break;
}
}
}
cout<<in[in][1];
return 0;
}
