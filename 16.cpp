#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int a,b;
    cin>>a>>b;
    cout<<(long long int)__gcd(a,b)<<" "<<(long long int)(a/__gcd(a,b))*b
    <<endl;
}
	return 0;
}
