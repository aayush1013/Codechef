#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0,y=0,z=0;
     for(int i=0;i<s.length();i++)
        {
            if(s[i]=='Y')
            x=1;
            else if(s[i]=='I')
            y=1;
        }
            if(x==1)
            {
                cout<<"NOT INDIAN"<<endl;
            }
            else if(y==1)
            {
                cout<<"INDIAN"<<endl;
            }
            else 
            {
                cout<<"NOT SURE"<<endl;
            }
}
	return 0;
}
