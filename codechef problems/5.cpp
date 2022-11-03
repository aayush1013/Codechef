#include <iostream>
using namespace std;

int main() {
    int n,check;
    cin>>n;
    if (n%4==0)
    {
       check=n+1;
        cout<<check<<endl;
    }
    else
    {
        check = n-1;
        cout<<check<<endl;
    }
	return 0;
}