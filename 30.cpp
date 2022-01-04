#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,m,k,diff=0;
    cin>>n>>m>>k;
    if(n<m)
    {
       diff=m-n;
        n+=min(diff,k);
        cout<<m-n<<endl;  
    }
    else if(n>m)
    {
        diff=n-m;
        m+=min(diff,k);
        cout<<n-m<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
}
	return 0;
}
