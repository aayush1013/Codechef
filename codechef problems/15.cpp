#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int t;
  cin>>t;
  while(t-->0)
  {
      int i,p; 
      double ans;
      cin>>i>>p;
      ans=i*p;
      if(i>1000)
      {
          ans-=ans*0.1;
      }
      cout<<setprecision(10)<<fixed;
      cout<<ans<<endl;
  }
	return 0;
}
