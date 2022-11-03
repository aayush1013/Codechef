#include <iostream>
using namespace std;

int main() {
    int t,cnt=0;
    cin>>t;
	while(t--)
	{
	    int n,p1;
	    cin>>n;
	    p1=n;
	    while(n>0 && n<=2048) {
        if((p1 & 1) == 1) {
        cnt++;
        }
        p1 = p1>>1;
        //cout << n <<endl;
        }
        if(n<=2048)
            cout<<cnt<<endl;
        cnt = 0;
        if(n>2048){
            int p =n;
        while(n>=2048) {
            p=n;
            while(p>0) {
                if((p & 1) == 1) {
                    cnt++;
                }
                p = p>>1;
            //cout << n <<endl;
            }
            // cout<<cnt<<endl;
            // cnt = 0;
            n = n-2048;
            p=n;
            //cout<<n<<endl;
            }
            if(p>0) {
                while(p>0) {
                if((p & 1) == 1) {
                    cnt++;
                }
                p = p>>1;
            //cout << n <<endl;
            }
            }
            cout<<cnt<<endl;
            cnt=0;
        }
	}
	return 0;
}



// 1 - 1 & 1 - 2^0
// 2 - 10 - 2^1
// 3 - 11 - 2^1 + 2^0
// 10 - 1010 & 1 -  