#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) 
        cin>>arr[i];
    int x= __gcd(arr[0],arr[1]);
    for (int i=2;i<n;i++)
        x=__gcd(x,arr[i]);
    for (int i=0;i<n;i++)
        cout<<arr[i]/x<<" ";
    cout<< endl;
}
return 0;
}
