#include<iostream>
#include<stdio.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void f(int ind,int target,vector<int> &arr, vector<vector<int>> &ans,vector<int> &ds)
{
    if(ind ==arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }
    if(arr[ind]<=target)
    {
        ds.push_back(arr[ind]);
        f(ind,target-arr[ind],arr,ans,ds);
        ds.pop_back();
    }
    f(ind+1,target,arr,ans,ds);
    
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
   int target;
   vector<int> ds;
   vector<vector<int>> ans;
   return 0;
}