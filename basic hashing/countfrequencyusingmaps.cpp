#include<iostream>
#include<stdio.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;
#define gor(i,n) for(int i=0;i<n;i++)

void frequency(int arr[],int n)
    {
        unordered_map<int,int> map;
        int i;

        gor(i,n);{
        map[arr[i]]++;
        }
        for(auto x: map)

        cout<<x.first<<" "<<x.second<<endl;
    
    } 

int main()
{
    int n;
    int i;
    cin>>n;
    int arr[n];
    gor(i,n){
    cin>>arr[i];
    }

    int x= sizeof(arr)/sizeof(arr[0]);
    frequency(arr,n);


    return 0;
}