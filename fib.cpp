#include<iostream>
using namespace std;
int main()
{
cout<<"Enter a number to find its fibonacci series"<<endl;
int t;
cin>>t;
int a[t+1];
a[0]=1;
a[1]=1;
for(int i=2;i<t;i++)
{ a[i]=a[i-1]+a[i-2];
}

cout<<"fibonaci series"<<endl;
for(int i=0;i<t;i++)
{ 
cout<<a[i]<<"+";
}
 
return 0;
}
