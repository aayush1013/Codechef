#include<iostream>
#include<stdio.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int f(int ind,int s, int sum,int arr[],int n)
{
    if(ind == n)
    {
        if(s==sum)
        {
            return 1;
        }
        else return 0;    }

s+= arr[ind];

int l = f(ind+1,s,sum,arr,n);
return true;

s-=arr[ind];

int r = f(ind+1,s,sum,arr,n);
return l+r;
}

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
        cin>>arr[i];
   }     
   int sum;
   cin>>sum;
   cout<< f(0,0,sum,arr,n); 

return 0;
}