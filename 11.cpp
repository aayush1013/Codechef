#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int n,num=0;
    cin>>n;
    num = num+(n/100);
    n=n%100;
    
    num = num +(n/50);
    n=n%50;
    
    num = num + (n/10);
    n = n%10;
    
    num = num + (n/5);
    n=n%5;
    
    num = num + (n/2);
    n=n%2;
    
    num = num + (n/1);
    n=n%1;
    
    num+=n;
    
    cout<<num<<endl;
}
	return 0;
}
