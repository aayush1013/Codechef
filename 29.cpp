#include <iostream>
using namespace std;

int main() {
int a,b,area=0,peri=0,eq=0;
cin>>a>>b;
area=a*b;
peri=2*(a+b);
if (area>peri)
{
    cout<<"Area\n";
    cout<<area<<endl;
}
else if(peri>area)
{
    cout<<"Peri\n";
    cout<<peri<<endl;
}
else
{
    cout<<"Eq"<<endl;
    cout<<peri<<endl;
}
	return 0;
}
