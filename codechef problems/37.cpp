#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printVec(vector<int>v){
    cout<<"size is:"<<v.size()<<endl;
    for (int i=0;i<v.size();++i)
    {
        //v.size()->o(1)
        cout<< v[i]<<" "<<endl;
    }
    cout<<endl;
}

//int declaration(vector<int> v)
//{
    //vector<int> o(10,2);
    //o.push_back(34);
  //  o.push_back(90);
//}

int main()
{
   /*vector <pair<int,int>>v ;
   printVec(v);
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    int x,y;
    cin>>x>>y;
    v.push_back({x,y});
   }
   printVec(v);*/
   //int n;
   //cin>>n;
   //for (int i=0;i<n;i++)
   //{
    //int x;
    //cin>>x;
   //v.push_back(7);
   //v.push_back(9);
   //v.push_back(89);
   //v.push_back(12);
   //printVec(v);
   //v.pop_back();
   //printVec(v);

   //vector<int> v2 = v;
   //v2.push_back(35);
   //v2.push_back(90);
   //printVec(v2);
   //v2.pop_back();
   //printVec(v2);

   int N;
   cin>>N;
   vector<vector<int>> v;
   for (int i=0;i<N;++i)
   {
    int n;
    cin>>n;
    vector<int> temp;
    for(int j=0;j<n;j++)
    {
        int x;
        cin>>x;
        temp.push_back(x);
    }
    v.push_back(temp);
    }
    for(int i=0;i<v.size();++i)
    {
        printVec(v[i]);
    }
   cout<<v[0][1];
}

