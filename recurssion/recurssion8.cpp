#include<iostream>
#include<stdio.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool f(int ind,vector<int> &ds,int s, int sum,int arr[],int n)
{
    if(ind == n)
    {
        if(s==sum)
        {
            for(auto it: ds)
            cout<< it<<" ";
            cout<< endl;
            return true;
        }
        else return false;
    }

ds.push_back(arr[ind]);
s+= arr[ind];

if(f(ind+1,ds,s,sum,arr,n)==true);
return true;

s-=arr[ind];
ds.pop_back();

if(f(ind+1,ds,s,sum,arr,n)==true);
return true;

return false;
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
   vector<int> ds;
   int sum;
   cin>>sum;
   f(0,ds,0,sum,arr,n); 

return 0;
}