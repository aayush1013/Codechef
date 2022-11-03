#include <iostream>
#include<string>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int count=0;
    string s1,s2;
    cin>>s1>>s2;
    int m = s1.length();
    char arr1[m],arr2[m];
    for(int i=0;i<m;i++) {
        arr1[i] = s1[i];
        arr2[i] = s2[i];
    }
    int maximum=0,minimum=0;
    for(int i=0;i<m;i++) {
        if(arr1[i]=='?' && arr2[i]=='?')
            maximum++;
        else if(arr1[i]!='?' && arr2[i]!='?' && arr1[i]!=arr2[i])
            {
                maximum++;
                minimum++;
            }
        
        else if((arr1[i]!='?' || arr2[i]!='?') && arr1[i]!=arr2[i])
            {
                maximum++;

            }
        
     }
     cout<<minimum<<" "<<maximum<<endl;
}
	return 0;
}
