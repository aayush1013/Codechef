#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t<0){
    int n,lucky=0,unlucky=0;
    cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {cin>>arr[i];}
   
   for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            lucky++;
        } else{
            unlucky++;
        }
    }
    
    
    if (lucky>unlucky)
    {cout<<"READY FOR BATTLE"<<endl;}
    else
    {cout<<"NOT READY"<<endl;}
}
	return 0;
}
