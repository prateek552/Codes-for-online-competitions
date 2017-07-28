#include<iostream>
#include<string>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
int m=0;int c=1;
for(int i=0;i<s.length();i++)
{
if(s[i]=='<')
c++;
else if(s[i]=='>' && c!=1)
c--;
else if(s[i]=='>' && c==1)
{
if(m>1)
m++;
else
m=2;
}
if(c>=m)
    m=c;

}cout<<m;
}



}

