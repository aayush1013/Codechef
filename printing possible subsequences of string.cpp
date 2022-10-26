#include<iostream>
#include<stdio.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;

vector<string> AllPossibleString(string s){
    int n = s.length();
    vector<string>ans;
    for(int num =0; num<(1<<num);num++)
    {
        string sub = "";
        for(int i=0;i<n;i++)
        {
            if(num & (1<<i))
            {
                sub+=s[i];
            }
        }
        if(sub.length()>0){
            ans.push_back(sub);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
string  s = "str";
vector<string>ans = AllPossibleString(s);

for(auto it: ans){
    cout<<it<<" ";
}
return 0;
}