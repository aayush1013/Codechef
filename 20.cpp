#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
 string s;
 cin >> s;
 int n;
 string p,q;
 n=s.length();
 for(int i=0;i<n/2;i++)
        {
            p+=s[i];
            q+=s[n-i-1];
        }
        sort(p.begin(), p.end());
        sort(q.begin(), q.end());
        
        if (p==q)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
	return 0;
}
