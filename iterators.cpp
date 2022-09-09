#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    vector<int> v = {2,3,6,7,9};
    for(int i=0;i<v.size();i++)
    {
        cout << v [i]<<  " ";
    }
    cout<<endl;
    vector <pair<int ,int>> vpair = {{23,32},{65,78},{98,34}};
    vector<pair<int,int>> ::iterator it;
    for(it=vpair.begin();it!=vpair.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl; 
    }
}