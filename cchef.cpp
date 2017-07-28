#include <iostream>
#include <string>
#include<algorithm>
#include<locale>
#include <string.h>
using namespace std;
int main()
{
int t;
cin>>t;
while((t--))
{
    string s;
    getline(cin,s);
    int a,b;
    int c=0;string n="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
        c++;
        if(c==1)
        b=i;
        else
        a=i;
        }
    }
    locale loc;
    switch(c)
    {
    case 1:n=s.substr(a-1,s.length());
    n=toupper(s[0],loc)+n;
    break;
    case 2:n=s.substr(b-1,s.length());
    n=""+toupper(s[0],loc)+toupper(s[a+1],loc)+n;
    break;
    default:n=s;
    }
    cout<<n;
}
}
