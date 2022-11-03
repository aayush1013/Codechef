#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int f(int n)
{
    if(n<=1)
    return n;
    int last,slast;
    last=f(n-1);
    slast=f(n-2);
    return last+slast;
}

int main()
{
   int n;
   cin>>n;
   cout<<f(n);
   return 0;  
}