#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n;
        cin>>x>>n;
        double rem;
        rem=x/10;
        int final =0;
        final=rem*n;
        cout<<final<<endl;

    } 
    return 0;
}