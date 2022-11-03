#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n-->0){
	    int d,t;
	    cin>>d;
	    cin>>t;
	      int sum=0;
	    while(d!=0){
	      sum=0;
	        for(int i=1;i<=t;i++){
	            sum=sum+i;
	        }
	        t=sum;
	  
	        d--;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
