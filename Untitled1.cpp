#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;t++;
    while(t--)
    {
        string s="";
        int c=0;
        getline(cin,s);
        int a,b;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                if(c==1)
                    b=i;
                else
                    a=i;
                c++;
            }
            else if(s[i]>=65 && s[i]<=90)
                s[i]=s[i]+32;
         }
        string n="";
            if(c==1){
                n=s.substr(a+1);
               n[0]= toupper(n[0]);
               if(s[0]>=97 && s[0]<=122)
                   s[0]=s[0]-32;
                string s1;
                     s1.push_back(s[0]);
                     n=s1+". "+n;
                    }
            else if(c==2){
                n=s.substr(b+1);
                n[0]=toupper(n[0]);
                string s1,s2;
                if(s[0]>=97 && s[0]<=122)
                   s[0]=s[0]-32;
                if(s[a+1]>=97 && s[a+1]<=122)
                   s[a+1]=s[a+1]-32;
                s1.push_back(s[0]);
                s2.push_back(s[a+1]);
                n=s1+". "+s2+". "+n;
                         }
            else{n=s;
                n[0]=toupper(n[0]);
        }
        cout<<n<<"\n";



    }
}

