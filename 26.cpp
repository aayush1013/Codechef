#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	for(;t>0;t--){
	    int n=0,k=0;
	    cin>>n>>k;
	    int max=0;
	    for(int i=1;i<=k;i++){
	        int temp=n%i;
	        if(temp>max){
	            max=temp;
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
