#include<iostream>
using namespace std;
#include<cstring>
#include<math.h>
string small(string &s)
{
    for(int i=0;i<s.length();++i)
    {
        s[i]=s[i]+32;
    }
    return s;
}
int main()
{
string s="CYBROM";
char c[]={"WELCOME"};
for(int i=s.length();i>=0;--i)
    {
        cout<<s[i];
    }
    cout<<"\n";
cout<<small(s)<<"\n";
cout<<strlwr(c)<<"\t"<<strlen(c)<<strcat(c,"all")<<strlen(c)<<"\n";
cout<<strcpy(c,"benjo");
if(stricmp(c,"BENJO")==0)
{
    cout<<"same\n";
}
else{
    cout<<"differ\n";
}
cout<<strrev(c)<<"\n";
cout<<sqrt(36)<<"\n";
cout<<pow(2,4)<<"\n";
cout<<min(30,4)<<"\n";
cout<<max(3,21)<<"\n";
int x=100;
int y=80;
cout<<"x="<<x<<"\n";
cout<<"y="<<y<<"\n";
swap(x,y);
cout<<"after swapped x="<<x<<"\n";
cout<<"after swapped y="<<y<<"\n";
}
