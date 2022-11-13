#include<iostream>
#include<stdio.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void countFreq(int arr[],int n)
{
    vector<bool> visited(n,false);
    int i;
    for(i=0;i<n;i++)
    {
        if(visited[i]==true)
        {
            continue;
        }
    }

    int count=1;
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        {
            visited[j]==true;
            count++;
        }
        cout<<arr[i]<< " "<< count <<endl;
    }
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

    int x=sizeof(arr)/sizeof(arr[0]);
    countFreq(arr,n);

    return 0;
}