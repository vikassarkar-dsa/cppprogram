#include<iostream>
using namespace std;
int main()
{
int n,c=0;
cout<<"enter num\n";
cin>>n;
while(n!=0)
{
c++;
n=n/10;
}
cout<<c;

}
