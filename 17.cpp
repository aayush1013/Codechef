#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,sq;
        cin>>x;
        x=x-2;
        sq=x/2;
        sq= sq*(sq+1)/2;
        cout<<sq<<"\n";
    }
    return 0;
}