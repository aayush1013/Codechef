#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int T,temp;
	int rem,sum=0;
	while(n--)
	{
	    cin>>T;
	    temp = T;
	    while(T>0)
	    {
	        rem = T % 10;
	        sum = sum*10 + rem;
	        T = T / 10;
	    }
	    if(temp == sum)
	    {
	        cout<<"wins"<<endl;
	    }
	    else
	    {
	        cout<<"loses"<<endl;
	    }
	    sum = 0;
	}
	return 0;
}
